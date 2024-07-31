object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = #1055#1086#1074#1077#1088#1082#1072' '#1089#1090#1091#1087#1077#1085#1095#1072#1090#1099#1093' '#1072#1090#1090#1077#1085#1102#1072#1090#1086#1088#1086#1074
  ClientHeight = 815
  ClientWidth = 1055
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  WindowState = wsMaximized
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object headPanel1: TPanel
    Left = 0
    Top = 0
    Width = 1055
    Height = 41
    Align = alTop
    Caption = #1055#1088#1086#1075#1088#1072#1084#1084#1072' '#1072#1074#1090#1086#1084#1072#1090#1080#1079#1080#1088#1086#1074#1072#1085#1085#1086#1081' '#1087#1086#1074#1077#1088#1082#1080' '#1072#1090#1090#1077#1085#1102#1072#1090#1086#1088#1086#1074' '#1085#1072' '#1042#1040#1062
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Arial Narrow'
    Font.Style = [fsBold, fsItalic, fsUnderline]
    ParentFont = False
    TabOrder = 0
    ExplicitWidth = 1065
  end
  object leftPanel: TPanel
    Left = 0
    Top = 41
    Width = 241
    Height = 733
    Align = alLeft
    TabOrder = 1
    ExplicitHeight = 784
    object StatusGroupBox: TGroupBox
      Left = 1
      Top = 1
      Width = 239
      Height = 67
      Align = alTop
      Caption = #1057#1090#1072#1090#1091#1089#1099' '#1087#1086#1076#1082#1083#1102#1095#1077#1085#1080#1103
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Arial'
      Font.Style = [fsItalic, fsUnderline]
      ParentFont = False
      TabOrder = 0
      ExplicitLeft = 0
      ExplicitTop = 6
      ExplicitWidth = 233
      object dbConnectionStatusLabel: TLabel
        Left = 3
        Top = 22
        Width = 144
        Height = 14
        Caption = #1055#1086#1076#1082#1083#1102#1095#1077#1085#1080#1077' '#1082' '#1073#1072#1079#1077' '#1076#1072#1085#1085#1099#1093
      end
      object equipmentConnectionLabel: TLabel
        Left = 3
        Top = 42
        Width = 153
        Height = 14
        Caption = #1055#1086#1076#1082#1083#1102#1095#1077#1085#1080#1077' '#1082' '#1086#1073#1086#1088#1091#1076#1086#1074#1072#1085#1080#1102
      end
    end
  end
  object bottomPanel: TPanel
    Left = 0
    Top = 774
    Width = 1055
    Height = 41
    Align = alBottom
    TabOrder = 2
    ExplicitLeft = 592
    ExplicitTop = 376
    ExplicitWidth = 185
  end
  object centralPanel: TPanel
    Left = 241
    Top = 41
    Width = 693
    Height = 733
    Align = alClient
    TabOrder = 3
    ExplicitLeft = 247
    ExplicitTop = 204
    ExplicitWidth = 810
    ExplicitHeight = 317
    object typesDBGrid: TDBGrid
      Left = 1
      Top = 1
      Width = 691
      Height = 296
      Align = alTop
      DataSource = TypesDataSource
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'name'
          Title.Alignment = taCenter
          Title.Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1090#1080#1087#1072' '#1057#1048
          Width = 134
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'designation'
          Title.Alignment = taCenter
          Title.Caption = #1054#1073#1086#1079#1085#1072#1095#1077#1085#1080#1077' '#1090#1080#1087#1072' '#1057#1048
          Width = 140
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'registryNumber'
          Title.Alignment = taCenter
          Title.Caption = #1053#1086#1084#1077#1088' '#1075#1086#1089'. '#1088#1077#1077#1089#1090#1088#1072
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'connectorTYpe'
          Title.Alignment = taCenter
          Title.Caption = #1058#1080#1087' '#1089#1086#1077#1076#1080#1085#1077#1085#1080#1103
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'startFreq'
          Title.Alignment = taCenter
          Title.Caption = #1053#1072#1095#1072#1083#1100#1085#1072#1103' '#1095#1072#1089#1090#1086#1090#1072
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'stopFreq'
          Title.Alignment = taCenter
          Title.Caption = #1050#1086#1085#1077#1095#1085#1072#1103' '#1095#1072#1089#1090#1086#1090#1072
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'comment'
          Title.Alignment = taCenter
          Title.Caption = #1050#1086#1084#1084#1077#1085#1090#1072#1088#1080#1081
          Visible = True
        end>
    end
    object typesDBNavigator: TDBNavigator
      Left = 1
      Top = 707
      Width = 691
      Height = 25
      DataSource = TypesDataSource
      Align = alBottom
      TabOrder = 1
      ExplicitLeft = 247
      ExplicitTop = 173
      ExplicitWidth = 240
    end
  end
  object rightPanel: TPanel
    Left = 934
    Top = 41
    Width = 121
    Height = 733
    Align = alRight
    TabOrder = 4
    ExplicitLeft = 944
    ExplicitHeight = 743
  end
  object MainMenu1: TMainMenu
    Left = 936
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object NewTypeMainMenuBtn: TMenuItem
        Caption = #1053#1086#1074#1099#1081' '#1090#1080#1087' '#1057#1048
        OnClick = NewTypeMainMenuBtnClick
      end
      object N5: TMenuItem
        Caption = #1055#1088#1086#1089#1084#1086#1090#1088' '#1090#1080#1087#1086#1074' '#1057#1048
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = '-'
      end
      object N7: TMenuItem
        Caption = #1053#1086#1074#1086#1077' '#1057#1048
      end
      object N8: TMenuItem
        Caption = #1057#1087#1080#1089#1086#1082' '#1057#1048
      end
      object N9: TMenuItem
        Caption = '-'
      end
      object N10: TMenuItem
        Caption = #1053#1086#1074#1072#1103' '#1087#1086#1074#1077#1088#1082#1072
      end
      object N11: TMenuItem
        Caption = #1040#1088#1093#1080#1074' '#1087#1086#1074#1077#1088#1086#1082
      end
      object N12: TMenuItem
        Caption = #1058#1080#1087#1099' '#1089#1088#1077#1076#1089#1090#1074' '#1080#1079#1084#1077#1088#1077#1085#1080#1081
      end
    end
    object N2: TMenuItem
      Caption = #1057#1074#1086#1081#1089#1090#1074#1072
      object N3: TMenuItem
        Caption = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093
        OnClick = N3Click
      end
      object N4: TMenuItem
        Caption = #1055#1086#1076#1082#1083#1102#1095#1077#1085#1080#1077' '#1082' '#1042#1040#1062
        OnClick = N4Click
      end
    end
  end
  object TypesDataSource: TDataSource
    DataSet = DataModule1.TypesTable
    Left = 768
    Top = 95
  end
end
