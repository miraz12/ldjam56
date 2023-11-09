{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system:
      let pkgs = import nixpkgs { inherit system; };
      in {
        devShell = with pkgs;
          mkShell.override { stdenv = llvmPackages.stdenv; } {
            buildInputs = [
              cmake
              clang-tools
              ccache
              emscripten
              python3
              ninja
              gdb
              libGL
              xorg.libX11
              xorg.libXrandr
              xorg.libXinerama
              xorg.libXcursor
              xorg.libXi
            ];
            shellHook = ''
                            export EM_CACHE=.emscripten_cache
              	      export DRI_PRIME=1
            '';
          };
      });
}
