object Form2: TForm2
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1079#1072#1087#1080#1089#1080
  ClientHeight = 199
  ClientWidth = 694
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 32
    Top = 24
    Width = 121
    Height = 21
    BorderStyle = bsNone
    Color = clWhite
    TabOrder = 0
    TextHint = #1060#1072#1084#1080#1083#1080#1103
  end
  object Edit2: TEdit
    Left = 32
    Top = 64
    Width = 121
    Height = 21
    BorderStyle = bsNone
    Color = clWhite
    TabOrder = 1
    TextHint = #1048#1084#1103
  end
  object Edit3: TEdit
    Left = 32
    Top = 104
    Width = 121
    Height = 21
    BorderStyle = bsNone
    Color = clWhite
    TabOrder = 2
    TextHint = #1054#1090#1095#1077#1089#1090#1074#1086
  end
  object Button1: TButton
    Left = 496
    Top = 120
    Width = 180
    Height = 45
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 3
    OnClick = Button1Click
  end
  object ComboBox1: TComboBox
    Left = 407
    Top = 24
    Width = 122
    Height = 21
    TabOrder = 4
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1087#1086#1083
    Items.Strings = (
      #1052#1091#1078#1089#1082#1086#1081
      #1046#1077#1085#1089#1082#1080#1081)
  end
  object ComboBox2: TComboBox
    Left = 543
    Top = 24
    Width = 133
    Height = 21
    TabOrder = 5
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1082#1091#1088#1089
    Items.Strings = (
      '1'
      '2'
      '3'
      '4')
  end
  object CalendarPicker1: TCalendarPicker
    Left = 176
    Top = 24
    Width = 225
    Height = 33
    CalendarHeaderInfo.DaysOfWeekFont.Charset = DEFAULT_CHARSET
    CalendarHeaderInfo.DaysOfWeekFont.Color = clWindowText
    CalendarHeaderInfo.DaysOfWeekFont.Height = -13
    CalendarHeaderInfo.DaysOfWeekFont.Name = 'Segoe UI'
    CalendarHeaderInfo.DaysOfWeekFont.Style = []
    CalendarHeaderInfo.Font.Charset = DEFAULT_CHARSET
    CalendarHeaderInfo.Font.Color = clWindowText
    CalendarHeaderInfo.Font.Height = -20
    CalendarHeaderInfo.Font.Name = 'Segoe UI'
    CalendarHeaderInfo.Font.Style = []
    Color = clWindow
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGray
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    TextHint = #1042#1099#1073#1077#1088#1080#1090#1077' '#1076#1072#1090#1091' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object ComboBox3: TComboBox
    Left = 287
    Top = 63
    Width = 114
    Height = 21
    TabOrder = 7
    Text = #1043#1086#1076' '#1087#1086#1089#1090#1091#1087#1083#1077#1085#1080#1103
    Items.Strings = (
      '2017'
      '2018'
      '2019'
      '2020'
      '2021')
  end
  object Edit4: TEdit
    Left = 32
    Top = 144
    Width = 121
    Height = 21
    BorderStyle = bsNone
    TabOrder = 8
    TextHint = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083
    OnKeyPress = Edit4KeyPress
  end
  object ComboBox4: TComboBox
    Left = 176
    Top = 63
    Width = 105
    Height = 21
    TabOrder = 9
    Text = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100
    Items.Strings = (
      #1055#1054#1048#1058
      #1044#1054
      #1041#1044
      #1050#1044
      #1058#1091#1088#1080#1079#1084
      #1051#1086#1075#1080#1089#1090#1080#1082#1072
      #1069#1082#1086#1085#1086#1084#1080#1082#1072
      #1057#1090#1088#1072#1093'. '#1044#1077#1083#1086
      #1041#1091#1093'. '#1059#1095#1105#1090)
  end
  object cancel: TButton
    Left = 400
    Top = 120
    Width = 90
    Height = 45
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 10
    OnClick = cancelClick
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form15.ADOConnection1
    CursorType = ctStatic
    DataSource = Form1.DataSource1
    Parameters = <>
    SQL.Strings = (
      'select * from '#1048#1085#1092#1086';')
    Left = 296
    Top = 112
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 216
    Top = 112
  end
end
