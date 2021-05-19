# Copyright (C)
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

set(scripts_STAT_SRCS
  ${scripts_STAT_SRCS}
  ${AC_SCRIPTS_DIR}/Outland/zone_nagrand.cpp
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/MagtheridonsLair/magtheridons_lair.h
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/MagtheridonsLair/instance_magtheridons_lair.cpp
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/HellfireRamparts/instance_hellfire_ramparts.cpp
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/HellfireRamparts/hellfire_ramparts.h
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/BloodFurnace/blood_furnace.h
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/BloodFurnace/instance_blood_furnace.cpp
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/ShatteredHalls/shattered_halls.h
  ${AC_SCRIPTS_DIR}/Outland/HellfireCitadel/ShatteredHalls/instance_shattered_halls.cpp
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/SteamVault/instance_steam_vault.cpp
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/SteamVault/steam_vault.h
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/SerpentShrine/instance_serpent_shrine.cpp
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/SerpentShrine/serpent_shrine.h
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/underbog/instance_the_underbog.cpp
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/underbog/the_underbog.h
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/SlavePens/instance_the_slave_pens.cpp
  ${AC_SCRIPTS_DIR}/Outland/CoilfangReservoir/SlavePens/the_slave_pens.h
  ${AC_SCRIPTS_DIR}/Outland/zone_shattrath_city.cpp
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/Mechanar/mechanar.h
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/Mechanar/instance_mechanar.cpp
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/Eye/the_eye.h
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/Eye/instance_the_eye.cpp
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/botanica/the_botanica.h
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/botanica/instance_the_botanica.cpp
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/arcatraz/instance_arcatraz.cpp
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/arcatraz/arcatraz.h
  ${AC_SCRIPTS_DIR}/Outland/TempestKeep/arcatraz/arcatraz.cpp
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/AuchenaiCrypts/instance_auchenai_crypts.cpp
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/AuchenaiCrypts/auchenai_crypts.h
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/ManaTombs/instance_mana_tombs.cpp
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/ManaTombs/mana_tombs.h
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/SethekkHalls/instance_sethekk_halls.cpp
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/SethekkHalls/sethekk_halls.h
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/ShadowLabyrinth/instance_shadow_labyrinth.cpp
  ${AC_SCRIPTS_DIR}/Outland/Auchindoun/ShadowLabyrinth/shadow_labyrinth.h
  ${AC_SCRIPTS_DIR}/Outland/zone_terokkar_forest.cpp
  ${AC_SCRIPTS_DIR}/Outland/zone_hellfire_peninsula.cpp
  ${AC_SCRIPTS_DIR}/Outland/BlackTemple/black_temple.h
  ${AC_SCRIPTS_DIR}/Outland/BlackTemple/illidari_council.cpp
  ${AC_SCRIPTS_DIR}/Outland/BlackTemple/instance_black_temple.cpp
  ${AC_SCRIPTS_DIR}/Outland/zone_shadowmoon_valley.cpp
  ${AC_SCRIPTS_DIR}/Outland/zone_blades_edge_mountains.cpp
  ${AC_SCRIPTS_DIR}/Outland/GruulsLair/gruuls_lair.h
  ${AC_SCRIPTS_DIR}/Outland/GruulsLair/instance_gruuls_lair.cpp
  ${AC_SCRIPTS_DIR}/Outland/zone_netherstorm.cpp
  ${AC_SCRIPTS_DIR}/Outland/zone_zangarmarsh.cpp
)

AC_ADD_SCRIPT_LOADER("Outland" "ScriptLoader.h")

message("  -> Prepared: Outland")
