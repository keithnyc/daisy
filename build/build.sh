#!/bin/bash
echo "Setting cmake"
cmake -DCMAKE_INSTALL_PREFIX=/usr ../
echo "Building"
make
echo "Installing"
sudo make install 