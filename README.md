# infinibar

Taskbar-like hardware monitor skin for [Rainmeter](https://www.rainmeter.net/).

Similar hover effect just like the Windows taskbar!

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

## Included layouts:

Horizontal_1920:

![Horizontal_1920](@Resources/Screenshots/Horizontal_1920.png)

| Vertical_1440                                              | Vertical_1080                                              |
| ---------------------------------------------------------- | ---------------------------------------------------------- |
| ![Vertical_1440](@Resources/Screenshots/Vertical_1440.png) | ![Vertical_1080](@Resources/Screenshots/Vertical_1080.png) |


## Screenshots

3440x1440: (This is how I use)

![Screenshot_3440x1440](@Resources/Screenshots/Screenshot_3440x1440.png)

1920x1080:

![Screenshot_1920x1080](@Resources/Screenshots/Screenshot_1920x1080.png)

Black background

![Screenshot_black_1920x1080](@Resources/Screenshots/Screenshot_black_1920x1080.png)

## Installation

Download the .rmskin package from [releases](https://github.com/infeeeee/infinibar/releases/latest), and open with rainmeter.

## Settings

All settings are in the `@Resources\Variables.inc` file. Edit with notepad, if something is not clear create an issue.

Button settings are in their respective .inis.

You can change the height of the skins in `@Resources\Style.inc`.

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

Every button is in a separate folder. To change the icon replace the Button.png file with yours, recommended size 48x48px. The icons in the theme by default are from https://material.io/icons/. Download icons from this site, the 48px versions will fit perfectly.

To change the function of the buttons in the Button.ini file change the StartInFolder, Parameter and State options. More info about how to edit them: https://docs.rainmeter.net/manual/plugins/runcommand/

If you want to create a new button just copy and paste one of the folders and rename it. 

#### Tips
* For the transparent taskbar use [TranslucentTB](https://github.com/TranslucentTB/TranslucentTB) - [MS Store link](https://www.microsoft.com/en-us/p/translucenttb/9pf4kz2vn4w9).
* If you always want to see the skin, you can reserve an area from maximized windows with the [DesktopWorkArea](https://docs.rainmeter.net/manual/settings/rainmeter-section/#DesktopWorkArea) Rainmeter setting. However this doesn't work reliably if you constantly detach and attach monitors, like I do. I recommend [DesktopCoral](https://www.donationcoder.com/software/mouser/other-windows-apps/desktopcoral) instead, it's much more consistent and free as well.
* I use [Wget for Windows](http://gnuwin32.sourceforge.net/packages/wget.htm) for the buttons, I send get requests to my other computers.

## Troubleshooting

* When some of the texts don't use the font, I recommend installing it system-wide. Font file location: @Resources\Fonts.

## Acknowledgments

The font used in the skin is Accidental Residency, created by Tepid Monkey. http://www.tepidmonkey.net/

Volume slider is based on a skin created by UNIGHT(http://unight.deviantart.com/) modded by DISCONNECTVD(http://dscnctvd.deviantart.com/)

Hwinfo skins are based on the example skin by Nick Connors. 

## License

Creative Commons BY-NC-SA 3.0