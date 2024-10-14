# SAP
Simple audio player written in C++/CLI using Windows Forms for GUI

# Dependencies
- Miniaudio [Link to repo](https://github.com/mackron/miniaudio)
- TagLib [Link to repo](https://github.com/taglib/taglib)

Note: You dont need to build and link these dependencies, see below.

# Building (Windows)
First you're gonna need vcpkg to install and link the dependencies (Miniaudio and TagLib), technically you could also build and link yourself but this way is easier (and also I havent tested that last bit).
The easiest way to use vcpkg is to use the copy that comes by default with Visual Studio (I use 2022) and making sure you're installing the vcpkg component (It should be enabled by default when you select "Desktop developement with C++" in the installer settings, but just to be sure check if the "vcpkg project manager" component is checked)

Then clone this project and run "vcpkg install" on the developer terminal, note that probably you will also need to run the vcpkg configuration (I dont know if its needed since this project also contains the vcpkg's manifest file, but just a heads up)

After that, vcpkg will download and compile required files for both miniaudio and TagLib, linking should be handled by Visual Studio automatically

Lastly simply compile and run the app :)

# Usage
Open the app and go to File > Quick Import and select a folder that contains your music files
Wait for SAP to scan your folder, this might take a moment
Once done, double click a song and click play. Enjoy.

# Features
- Metadata viewer
- LRC sync (If your file has embeded LRC text it should be visible on the "Lyrics" tab, only works for MPEG audio (mp3) and FLACs)
- Uhhhh... idk, a volume slider?

## Motivation
I simply wanted to know more about C++/CLI and what best way to do it than to do the only thing I love, making music players for no reason :p

# License
This project is licensed under the GPLv3 license
