[Variables]
hddLedColor=#colorBarBackground#

; ----------------------------------
; MEASURES return some kind of value
; ----------------------------------

[measureTotalDisk]
Measure=FreeDiskSpace
Drive=#disk#
Total=1
UpdateDivider=1200
Substitute=" G":"GB"," T":"TB"

[measureUsedDisk]
Measure=FreeDiskSpace
Drive=#disk#
InvertMeasure=1
UpdateDivider=1200
Substitute=" G":"GB"," T":"TB"

[measureAccessDisk]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#disk#
IfAboveValue=0
IfAboveAction=[!SetVariable hddLedColor #colorBar#]
IfBelowValue=1
IfBelowAction=[!SetVariable hddLedColor #colorBarBackground#]
UpdateDivider=10

; ----------------------------------
; METERS display images, text, bars, etc.
; ----------------------------------

[meterBg]
Meter=Image
meterStyle=styleBg
H=(#fullHeightHDD#-7)

[meterLabelDisk1]
Meter=String
MeterStyle=styleTitle
Text=#disk#
LeftMouseUpAction=["#disk#\"]

[meterAccessBarDisk1]
Meter=Image
DynamicVariables=1
MeterStyle=styleAccessBar

[meterValueDisk1perc]
Meter=String
MeterStyle=styleValue
MeasureName=measureUsedDisk
MeasureName2=measureTotalDisk
Text=%1%
NumOfDecimals=0
Percentual=1
LeftMouseUpAction=["#disk#\"]

[meterBarDisk1]
Meter=Bar
MeterStyle=styleBar
MeasureName=measureUsedDisk
LeftMouseUpAction=["#disk#\"]

[meterValueDisk1]
Meter=String
MeterStyle=styleSmallCenter
MeasureName=measureUsedDisk
MeasureName2=measureTotalDisk
Text=%1/%2
NumOfDecimals=0
AutoScale=1
LeftMouseUpAction=["#disk#\"]