object MainForm: TMainForm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = #1055#1086#1074#1077#1088#1082#1072' '#1089#1090#1091#1087#1077#1085#1095#1072#1090#1099#1093' '#1072#1090#1090#1077#1085#1102#1072#1090#1086#1088#1086#1074
  ClientHeight = 716
  ClientWidth = 1055
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object MainMenu1: TMainMenu
    Left = 992
    Top = 8
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object NewTypeMainMenuBtn: TMenuItem
        Caption = #1053#1086#1074#1099#1081' '#1090#1080#1087' '#1057#1048
        OnClick = NewTypeMainMenuBtnClick
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
end
