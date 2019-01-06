[Rainmeter]
Update=100
BackgroundMode=2

@include1=#@#Variables.inc
;@include1=#@#infinibar-Variables.inc

SolidColor=#colorBackground#

[Variables]
fontName="Accidental Presidency"
fontSizeMult=0.78

;general dimensions
paddingX=4
fullWidth=74

;Heights: 
;If you use a horizontal layout, you should change this to the same number!
fullHeightGeneric=77
fullHeightHDD=89
fullHeightTemp=45
fullHeightButton=36

;Alignements
titleX=(#fullWidth#/2)
titleY=-3
titleW=#fullWidth#

tempX=#paddingX#
tempY=37

valueX=(#fullWidth#-#paddingX#)
valueY=(#tempY#)

barPadding=(#paddingX#+3)
barX=#barPadding#
barY=60
barW=(#fullWidth#-(2*#barPadding#))
barH=12

abarX=#barX#
abarY=(#valueY#+6)
abarW=13
abarH=13

smallX=(#fullWidth#/2)
smallY=73
smallW=#fullWidth#
smallH=16

buttonW=38
buttonH=#buttonW#
buttonX=((#fullWidth#-#buttonW#)/2)
buttonY=4

;--------
; Styles
;--------

[styleTitle]
;SolidColor=255,0,255,255
StringAlign=Center
FontColor=#colorText#
FontSize=(Floor(43*#fontSizeMult#))
X=#titleX#
Y=#titleY#
W=#titleW#
H=50

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleValue]
;SolidColor=255,128,128,255
StringAlign=Right
FontColor=#colorText#
FontSize=(Floor(20*#fontSizeMult#))

X=#valueX#
Y=#valueY#

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleTemp]
;SolidColor=255,128,128,255
StringAlign=Left
FontColor=#colorText#
FontSize=(Floor(20*#fontSizeMult#))

X=#tempX#
Y=#tempY#

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleSmallCenter]
StringAlign=Center
FontColor=#colorText#
FontSize=(Floor(15*#fontSizeMult#))

X=#smallX#
Y=#smallY#
W=#smallW#
H=#smallH#

StringCase=None
StringStyle=Normal
StringEffect=None
FontFace=#fontName#
AntiAlias=1
ClipString=0

[styleBar]
BarColor=#colorBar#
BarOrientation=HORIZONTAL
SolidColor=#colorBarBackground#
X=#barX#
Y=#barY#
W=#barW#
H=#barH#

[styleAccessBar]
SolidColor=#hddLedColor#
X=#abarX#
Y=#abarY#
W=#abarW#
H=#abarH#

[styleBg]
X=0
Y=7
W=#fullWidth#
H=(#fullHeightGeneric#-7)
SolidColor=#colorBackground#
;SolidColor=#colorHoverBackground#
MouseOverAction=[!SetOption meterBg Solidcolor #colorHoverBackground#]
MouseLeaveAction=[!SetOption meterBg Solidcolor #colorBackground#]

[styleButton]
StringAlign=Center

X=#buttonX#
Y=#buttonY#
W=#buttonW#
H=#buttonH#

ImageName=#CURRENTPATH#Button.png
Tile=0
PreserveAspectRatio=1
leftmouseupaction=[!RefreshApp][!CommandMeasure MeasureButton "Run"]