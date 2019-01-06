# infinibar

Taskbar-like hardware monitor skin for [Rainmeter](https://www.rainmeter.net/).

Based on my other skin, [infinimal](https://github.com/infeeeee/infinimal)

## Included skins

#### Hardware monitor
* CPU 
* RAM 
* VGA
* VRM (VRAM)
* HDD (Max. 6 by default)
* Network in, out, and/or both

#### Time and weather
* Clock with date or only clock
* Date
* Temperature left or right aligned

#### Sound
* Volume slider

#### Buttons
* Buttons for starting programs, .bats, websites etc.

#### Other
* Ruler for aligning vertically

## Installation

Download the .rmskin package from [releases](https://github.com/infeeeee/infinimal/releases/latest), and open with rainmeter.

The cryptocurrency version only contains those 4 skins.

## Useage

All settings are in the @Resources\Variables.inc file. Edit with notepad, if something is not clear create an issue.

#### HWINFO plugin
You will need update the HWiNFO IDs included in this skin to match the IDs for your system.  To do this:
1. ensure HWiNFO is running, with sensors and shared memory active
2. run the included "HWiNFOSharedMemoryViewer.exe" file in the @Resources\Plugins folder
3. find the sensor reading you need (CPU Usage for example) and make note of the sensor id, sensor instance and entry id
4. edit the Variables.inc file in the @Resources folder to replace the provided IDs with the IDs for your system
5. refresh all skins

More info on this plugin: https://www.hwinfo.com/forum/Thread-Rainmeter-plug-in-for-HWiNFO-3-2

The original HWiNFO.inc is included in the @resources\Plugins folder, however not used anywhere, just for reference.

You can use the speedfan version for CPU if you want.
VGA and VRM skins are HWinfo only.

#### Buttons
TODO: update this part in the readme!

~~There are 8 button and 4 button skins, both of them has 2 optional configuration.
Button settings are not in the Variables file. In the Buttons.ini files edit the parameter value of the Measures. 
More info about how to edit them: https://docs.rainmeter.net/manual/plugins/runcommand/
The images are autmatically selected from the buttons respective folder, you only have to renam them 1.png 2.png etc. 
The icons in the theme by default are from https://material.io/icons/. Download icons from this site, the 36px versions will fit perfectly.~~

#### Tips
* If you allways want to see the skin, you can reserve an area from maximised windows with the [DesktopWorkArea](https://docs.rainmeter.net/manual/settings/rainmeter-section/#DesktopWorkArea) Rainmeter setting. However this doesn't like if you constantly detach and attach monitors, like I do. I recommend [DesktopCoral](https://www.donationcoder.com/software/mouser/other-windows-apps/desktopcoral) instead, it's much mire consistent and free as well.
* I use [Wget for Windows](http://gnuwin32.sourceforge.net/packages/wget.htm) for the buttons, I send get requests to my other computers.

## Troubleshooting

* When some of the texts don't use the font, I recommend installing it systemwide. Font file location: @Resources\Fonts.

## Authors

infeeeee - gyetpet at gmail com

## Acknowledgments

The font used in the skin is Accidental Residency, created by Tepid Monkey. http://www.tepidmonkey.net/

Volume slider is based on a skin created by UNIGHT(http://unight.deviantart.com/) modded by DISCONNECTVD(http://dscnctvd.deviantart.com/)

Hwinfo skins are based on the example skin by Nick Connors. 

## License

GNU GPLv3
