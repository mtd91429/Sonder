[Variables]
animations1=[!CommandMeasure MeasureLuaTween "Start(0)"][!CommandMeasure MeasureLuaTween "Start(1)"][!CommandMeasure MeasureLuaTween "Start(2)"][!CommandMeasure MeasureLuaTween "Start(3)"][!CommandMeasure MeasureLuaTween "Start(4)"][!CommandMeasure MeasureLuaTween "Start(5)"][!CommandMeasure MeasureLuaTween "Start(6)"][!Delay #AnimationDuration#]
animations2=[!CommandMeasure MeasureLuaTween "Reverse(0)"][!CommandMeasure MeasureLuaTween "Reverse(1)"][!CommandMeasure MeasureLuaTween "Reverse(2)"][!CommandMeasure MeasureLuaTween "Reverse(5)"][!CommandMeasure MeasureLuaTween "Reverse(6)"][!CommandMeasure MeasureLuaTween "Reverse(3)"][!CommandMeasure MeasureLuaTween "Reverse(4)"]
noanimations1=[!SetVariable FlipColorActive #FlipColorOn#][!SetVariable FlipXActive "#FlipXOn#"][!HideMeter MeterTextOff][!ShowMeter MeterTextOn][!SetOption MeterTextOn X "#TextOnX#"][!SetVariable SwitchBackgroundColorActive #SwitchBackgroundColorOn#][!UpdateMeter MeterFlip][!UpdateMeter MeterSwitch][!UpdateMeter MeterTextOn]
noanimations2=[!SetVariable FlipColorActive #FlipColorOff#][!SetVariable FlipXActive "#FlipXOff#"][!HideMeter MeterTextOn][!ShowMeter MeterTextOff][!SetOption MeterTextOff X "#TextOffX#"][!SetVariable SwitchBackgroundColorActive #SwitchBackgroundColorOff#][!UpdateMeter MeterFlip][!UpdateMeter MeterSwitch][!UpdateMeter MeterTextOff]