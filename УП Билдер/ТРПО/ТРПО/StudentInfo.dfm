﻿object Form3: TForm3
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1055#1088#1086#1089#1084#1086#1090#1088' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080' '#1086' '#1089#1090#1091#1076#1077#1085#1090#1077
  ClientHeight = 318
  ClientWidth = 684
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Имя: TLabel
    Left = 31
    Top = 90
    Width = 19
    Height = 13
    Caption = #1048#1084#1103
  end
  object Label2: TLabel
    Left = 32
    Top = 63
    Width = 3
    Height = 13
  end
  object Head: TLabel
    Left = 192
    Top = 8
    Width = 299
    Height = 33
    Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1089#1090#1091#1076#1077#1085#1090#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Фамилия: TLabel
    Left = 32
    Top = 44
    Width = 44
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103
  end
  object Отчество: TLabel
    Left = 33
    Top = 141
    Width = 49
    Height = 13
    Caption = #1054#1090#1095#1077#1089#1090#1074#1086
  end
  object Label1: TLabel
    Left = 33
    Top = 187
    Width = 19
    Height = 13
    Caption = #1055#1086#1083
  end
  object Label3: TLabel
    Left = 240
    Top = 85
    Width = 130
    Height = 13
    Caption = #1059#1095#1080#1090#1089#1103' '#1087#1086' '#1089#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1080
  end
  object Label4: TLabel
    Left = 243
    Top = 130
    Width = 13
    Height = 13
    Caption = #1053#1072
  end
  object Label5: TLabel
    Left = 305
    Top = 130
    Width = 84
    Height = 13
    Caption = #1082#1091#1088#1089#1077' '#1086#1073#1091#1095#1077#1085#1080#1103'.'
  end
  object Label6: TLabel
    Left = 33
    Top = 240
    Width = 80
    Height = 13
    Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object Label7: TLabel
    Left = 507
    Top = 85
    Width = 5
    Height = 13
    Caption = 'c'
  end
  object Label8: TLabel
    Left = 575
    Top = 85
    Width = 24
    Height = 13
    Caption = #1075#1086#1076#1072
  end
  object Label9: TLabel
    Left = 243
    Top = 168
    Width = 187
    Height = 13
    Caption = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083' '#1089#1090#1091#1076#1077#1085#1090#1072' '#1089#1086#1089#1090#1072#1074#1083#1103#1077#1090':'
  end
  object change: TButton
    Left = 535
    Top = 263
    Width = 131
    Height = 37
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    Enabled = False
    TabOrder = 0
    OnClick = changeClick
  end
  object save: TButton
    Left = 400
    Top = 263
    Width = 131
    Height = 37
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    Enabled = False
    TabOrder = 1
    OnClick = saveClick
  end
  object name: TDBEdit
    Left = 31
    Top = 109
    Width = 121
    Height = 21
    DataField = #1048#1084#1103
    DataSource = Form1.DataSource1
    ReadOnly = True
    TabOrder = 2
  end
  object fam: TDBEdit
    Left = 32
    Top = 63
    Width = 121
    Height = 21
    DataField = #1060#1072#1084#1080#1083#1080#1103
    DataSource = Form1.DataSource1
    ReadOnly = True
    TabOrder = 3
  end
  object otch: TDBEdit
    Left = 32
    Top = 160
    Width = 121
    Height = 21
    DataField = #1054#1090#1095#1077#1089#1090#1074#1086
    DataSource = Form1.DataSource1
    ReadOnly = True
    TabOrder = 4
  end
  object date: TDBEdit
    Left = 33
    Top = 259
    Width = 72
    Height = 21
    DataField = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
    DataSource = Form1.DataSource1
    ReadOnly = True
    TabOrder = 5
  end
  object ball: TDBEdit
    Left = 436
    Top = 165
    Width = 37
    Height = 21
    DataField = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083
    DataSource = Form1.DataSource1
    ReadOnly = True
    TabOrder = 6
    OnKeyPress = ballKeyPress
  end
  object next: TButton
    Left = 305
    Top = 264
    Width = 89
    Height = 36
    Caption = #1042#1087#1077#1088#1105#1076
    TabOrder = 7
    OnClick = nextClick
  end
  object back: TButton
    Left = 216
    Top = 264
    Width = 83
    Height = 36
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 8
    OnClick = backClick
  end
  object sex: TDBComboBox
    Left = 32
    Top = 206
    Width = 121
    Height = 21
    DataField = #1055#1086#1083
    DataSource = Form1.DataSource1
    Items.Strings = (
      #1052#1091#1078#1089#1082#1086#1081
      #1046#1077#1085#1089#1082#1080#1081)
    ReadOnly = True
    TabOrder = 9
  end
  object spec: TDBComboBox
    Left = 376
    Top = 82
    Width = 125
    Height = 21
    DataField = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100
    DataSource = Form1.DataSource1
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
    ReadOnly = True
    TabOrder = 10
  end
  object year: TDBComboBox
    Left = 518
    Top = 82
    Width = 51
    Height = 21
    DataField = #1043#1086#1076' '#1087#1086#1089#1090#1091#1087#1083#1077#1085#1080#1103
    DataSource = Form1.DataSource1
    Items.Strings = (
      '2017'
      '2018'
      '2019'
      '2020'
      '2021')
    ReadOnly = True
    TabOrder = 11
  end
  object cource: TDBComboBox
    Left = 262
    Top = 127
    Width = 37
    Height = 21
    DataField = #1050#1091#1088#1089
    DataSource = Form1.DataSource1
    Items.Strings = (
      '1'
      '2'
      '3'
      '4')
    ReadOnly = True
    TabOrder = 12
  end
  object close: TButton
    Left = 616
    Top = 8
    Width = 50
    Height = 49
    Caption = #1042#1099#1081#1090#1080
    TabOrder = 13
    OnClick = closeClick
  end
  object delet: TButton
    Left = 535
    Top = 216
    Width = 131
    Height = 41
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Enabled = False
    TabOrder = 14
    OnClick = deletClick
  end
end
