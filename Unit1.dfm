object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ComboBox1: TComboBox
    Left = 8
    Top = 39
    Width = 145
    Height = 21
    TabOrder = 0
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1103#1079#1099#1082
    Items.Strings = (
      #1056#1091#1089#1089#1082#1080#1081
      'English')
  end
  object Button1: TButton
    Left = 24
    Top = 8
    Width = 113
    Height = 25
    Caption = #1047#1072#1087#1088#1086#1089' '#1089#1087#1080#1089#1082#1072
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Brush Script MT'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object ComboBox2: TComboBox
    Left = 176
    Top = 39
    Width = 145
    Height = 21
    Sorted = True
    TabOrder = 2
    Text = #1040#1101#1088#1086#1087#1086#1088#1090#1099
  end
  object DateTimePicker1: TDateTimePicker
    Left = 24
    Top = 252
    Width = 186
    Height = 21
    Date = 41822.758561226850000000
    Time = 41822.758561226850000000
    TabOrder = 3
  end
  object Memo1: TMemo
    Left = 320
    Top = 83
    Width = 297
    Height = 190
    Lines.Strings = (
      '')
    TabOrder = 4
  end
  object Button2: TButton
    Left = 176
    Top = 8
    Width = 145
    Height = 25
    Caption = #1055#1086#1083#1091#1095#1077#1085#1080#1077' '#1089#1087#1080#1089#1082#1072' '#1088#1077#1081#1089#1086#1074
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Brush Script MT'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 5
    OnClick = Button2Click
  end
end
