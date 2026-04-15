#!/bin/bash
# Builds the Logue SDK oscillator using Docker

echo "Building Roads using Docker..."
docker build -t logue-builder .

echo "Extracting .mnlgxdunit to build_out/ directory..."
mkdir -p build_out
docker run --rm -v "$(pwd)/build_out:/out" logue-builder

echo "Build complete! Check the build_out/ directory for your oscillator."
