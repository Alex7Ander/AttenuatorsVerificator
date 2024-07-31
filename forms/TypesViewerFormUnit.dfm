object typesViewerForm: TtypesViewerForm
  Left = 0
  Top = 0
  BorderStyle = bsSizeToolWin
  Caption = #1055#1088#1086#1089#1084#1086#1090#1088' '#1090#1080#1087#1086#1074' '#1057#1048
  ClientHeight = 679
  ClientWidth = 918
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object typesListGroupBox: TGroupBox
    Left = 8
    Top = 8
    Width = 449
    Height = 657
    Caption = #1057#1087#1080#1089#1086#1082' '#1090#1080#1087#1086#1074' '#1057#1048' '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object ListBox1: TListBox
      Left = 3
      Top = 24
      Width = 443
      Height = 584
      ItemHeight = 20
      TabOrder = 0
    end
    object newTypeButton: TButton
      Left = 3
      Top = 614
      Width = 443
      Height = 35
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1086#1074#1099#1081' '#1090#1080#1087' '#1057#1048
      TabOrder = 1
      OnClick = newTypeButtonClick
    end
  end
  object mainInfoGroupBox: TGroupBox
    Left = 463
    Top = 8
    Width = 449
    Height = 657
    Caption = #1054#1089#1085#1086#1074#1085#1072#1103' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1103': '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    object Label1: TLabel
      Left = 16
      Top = 24
      Width = 40
      Height = 20
      Caption = 'Label1'
    end
    object saveButton: TButton
      Left = 3
      Top = 614
      Width = 443
      Height = 35
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
      TabOrder = 0
    end
  end
end
