#ifndef H_GAMESETTINGS
#define H_GAMESETTINGS

#include <string>

struct PlayingFieldSettings {
  int y_playing_field;
  int x_playing_field;
};

struct AISettings {
  int difficulty;
  bool AICheck;
};

struct GameSettings {
  PlayingFieldSettings playing_field_settings;
  int platform_length;
  AISettings ai_settings;
};

GameSettings getGameSettings();

int EnterValue(std::string String, int left, int right);

bool SaveSettings (GameSettings game_settings);

GameSettings LoadSettings ();
#endif