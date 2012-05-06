#pragma once

namespace BW
{
  enum GamePosition
  {
    GAME_INTRO,
    GAME_RUNINIT,
    GAME_EXIT,
    GAME_RUN,
    GAME_GLUES,
    GAME_RESTART,
    GAME_WIN,
    GAME_LOSE,
    GAME_CREDITS,
    GAME_EPILOG,
    GAME_CINEMATIC,
    GAME_MAX
  };


  enum MenuPosition
  {
    GLUE_MAIN_MENU,
    GLUE_SIMULATE,
    GLUE_CONNECT,
    GLUE_CHAT,
    GLUE_BATTLE,
    GLUE_LOGIN,
    GLUE_CAMPAIGN,
    GLUE_READY_T,
    GLUE_READY_Z,
    GLUE_READY_P,
    GLUE_GAME_SELECT,
    GLUE_CREATE,
    GLUE_CREATE_MULTI,
    GLUE_LOAD,
    GLUE_SCORE_Z_DEFEAT,
    GLUE_SCORE_Z_VICTORY,
    GLUE_SCORE_T_DEFEAT,
    GLUE_SCORE_T_VICTORY,
    GLUE_SCORE_P_DEFEAT,
    GLUE_SCORE_P_VICTORY,
    GLUE_MODEM,
    GLUE_DIRECT,
    GLUE_EX_CAMPAIGN,
    GLUE_GAME_MODE,
    GLUE_EX_GAME_MODE,
    GLUE_GENERIC,
    GLUE_MAX
  };
}

