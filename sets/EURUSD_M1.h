//+------------------------------------------------------------------+
//|                  EA31337 - multi-strategy advanced trading robot |
//|                       Copyright 2016-2020, 31337 Investments Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_SAR_EURUSD_M1_Params : Stg_SAR_Params {
  Stg_SAR_EURUSD_M1_Params() {
    symbol = "EURUSD";
    tf = PERIOD_M1;
    SAR_Period = 32;
    SAR_Applied_Price = 3;
    SAR_Shift = 0;
    SAR_TrailingStopMethod = 6;
    SAR_TrailingProfitMethod = 11;
    SAR_SignalOpenLevel = 36;
    SAR_SignalBaseMethod = 0;
    SAR_SignalOpenMethod1 = 0;
    SAR_SignalOpenMethod2 = 0;
    SAR_SignalCloseLevel = 36;
    SAR_SignalCloseMethod1 = 0;
    SAR_SignalCloseMethod2 = 0;
    SAR_MaxSpread = 2;
  }
};
