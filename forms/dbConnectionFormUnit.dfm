object dbConnectionForm: TdbConnectionForm
  Left = 0
  Top = 0
  BorderStyle = bsToolWindow
  Caption = #1057#1074#1086#1081#1089#1090#1074#1072' '#1087#1086#1076#1082#1083#1102#1095#1077#1085#1080#1103' '#1082' '#1041#1044
  ClientHeight = 308
  ClientWidth = 629
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object dbGroupBox: TGroupBox
    Left = 8
    Top = 8
    Width = 619
    Height = 292
    Caption = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object filePathBannerLabel: TLabel
      Left = 16
      Top = 24
      Width = 121
      Height = 20
      Caption = #1060#1072#1081#1083' '#1073#1072#1079#1099' '#1076#1072#1085#1085#1099#1093':'
    end
    object filePathLabel: TLabel
      Left = 143
      Top = 24
      Width = 7
      Height = 20
      Caption = '_'
    end
    object dbFilePathButton: TButton
      Left = 16
      Top = 56
      Width = 121
      Height = 25
      Caption = #1042#1099#1073#1088#1072#1090#1100
      TabOrder = 0
      OnClick = dbFilePathButtonClick
    end
    object connectionMemo: TMemo
      Left = 16
      Top = 144
      Width = 585
      Height = 129
      Lines.Strings = (
        '')
      TabOrder = 1
    end
    object connectButton: TButton
      Left = 16
      Top = 113
      Width = 121
      Height = 25
      Caption = #1055#1086#1076#1082#1083#1102#1095#1080#1090#1100#1089#1103
      TabOrder = 2
      OnClick = connectButtonClick
    end
  end
  object dbFileOpenDialog: TFileOpenDialog
    FavoriteLinks = <>
    FileTypes = <>
    Options = []
    Left = 152
    Top = 64
  end
  object FDConnection1: TFDConnection
    Left = 248
    Top = 64
  end
  object FDPhysSQLiteDriverLink1: TFDPhysSQLiteDriverLink
    Left = 352
    Top = 64
  end
end
