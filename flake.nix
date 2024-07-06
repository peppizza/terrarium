{
  description = "Terrarium dev flake";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";

    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pico-sdk151 = with pkgs; (pico-sdk.overrideAttrs (o:
          rec {
            pname = "pico-sdk";
            version = "1.5.1";
            src = fetchFromGitHub {
              fetchSubmodules = true;
              owner = "raspberrypi";
              repo = pname;
              rev = version;
              sha256 = "sha256-GY5jjJzaENL3ftuU5KpEZAmEZgyFRtLwGVg3W1e/4Ho=";
            };
          }));

        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        devShells.default = with pkgs; mkShell {
          buildInputs = [
            cmake
            gcc-arm-embedded
            libusb1
            openocd
            pico-sdk151
            picotool
            python3
          ];

          shellHook = with pkgs; ''
            export PICO_SDK_PATH="${pico-sdk151}/lib/pico-sdk"
          '';
        };
      }
    );
}
