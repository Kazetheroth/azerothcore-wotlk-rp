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
  ${AC_SCRIPTS_DIR}/Northrend/isle_of_conquest.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_storm_peaks.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/HallsOfLightning/instance_halls_of_lightning.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/HallsOfLightning/halls_of_lightning.h
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/Ulduar/ulduar.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/Ulduar/instance_ulduar.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/Ulduar/ulduar.h
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/HallsOfStone/halls_of_stone.h
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/HallsOfStone/instance_halls_of_stone.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/HallsOfStone/halls_of_stone.h
  ${AC_SCRIPTS_DIR}/Northrend/Ulduar/HallsOfStone/brann_bronzebeard.cpp
  ${AC_SCRIPTS_DIR}/Northrend/ChamberOfAspects/ObsidianSanctum/instance_obsidian_sanctum.cpp
  ${AC_SCRIPTS_DIR}/Northrend/ChamberOfAspects/ObsidianSanctum/obsidian_sanctum.h
  ${AC_SCRIPTS_DIR}/Northrend/ChamberOfAspects/RubySanctum/instance_ruby_sanctum.cpp
  ${AC_SCRIPTS_DIR}/Northrend/ChamberOfAspects/RubySanctum/ruby_sanctum.h
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/HallsOfReflection/halls_of_reflection.h
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/HallsOfReflection/instance_halls_of_reflection.cpp
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/HallsOfReflection/halls_of_reflection.cpp
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/PitOfSaron/pit_of_saron.cpp
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/PitOfSaron/pit_of_saron.h
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/PitOfSaron/instance_pit_of_saron.cpp
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/ForgeOfSouls/forge_of_souls.cpp
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/ForgeOfSouls/instance_forge_of_souls.cpp
  ${AC_SCRIPTS_DIR}/Northrend/FrozenHalls/ForgeOfSouls/forge_of_souls.h
  ${AC_SCRIPTS_DIR}/Northrend/Nexus/EyeOfEternity/instance_eye_of_eternity.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Nexus/EyeOfEternity/eye_of_eternity.h
  ${AC_SCRIPTS_DIR}/Northrend/Nexus/Oculus/oculus.h
  ${AC_SCRIPTS_DIR}/Northrend/Nexus/Oculus/oculus.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Nexus/Oculus/instance_oculus.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Nexus/Nexus/instance_nexus.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Nexus/Nexus/nexus.h
  ${AC_SCRIPTS_DIR}/Northrend/CrusadersColiseum/TrialOfTheCrusader/trial_of_the_crusader.h
  ${AC_SCRIPTS_DIR}/Northrend/CrusadersColiseum/TrialOfTheCrusader/trial_of_the_crusader.cpp
  ${AC_SCRIPTS_DIR}/Northrend/CrusadersColiseum/TrialOfTheCrusader/instance_trial_of_the_crusader.cpp
  ${AC_SCRIPTS_DIR}/Northrend/CrusadersColiseum/TrialOfTheChampion/trial_of_the_champion.h
  ${AC_SCRIPTS_DIR}/Northrend/CrusadersColiseum/TrialOfTheChampion/trial_of_the_champion.cpp
  ${AC_SCRIPTS_DIR}/Northrend/CrusadersColiseum/TrialOfTheChampion/instance_trial_of_the_champion.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Naxxramas/naxxramas.h
  ${AC_SCRIPTS_DIR}/Northrend/Naxxramas/instance_naxxramas.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_crystalsong_forest.cpp
  ${AC_SCRIPTS_DIR}/Northrend/VaultOfArchavon/vault_of_archavon.h
  ${AC_SCRIPTS_DIR}/Northrend/VaultOfArchavon/instance_vault_of_archavon.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_sholazar_basin.cpp
  ${AC_SCRIPTS_DIR}/Northrend/UtgardeKeep/UtgardePinnacle/instance_utgarde_pinnacle.cpp
  ${AC_SCRIPTS_DIR}/Northrend/UtgardeKeep/UtgardePinnacle/utgarde_pinnacle.h
  ${AC_SCRIPTS_DIR}/Northrend/UtgardeKeep/UtgardeKeep/utgarde_keep.h
  ${AC_SCRIPTS_DIR}/Northrend/UtgardeKeep/UtgardeKeep/instance_utgarde_keep.cpp
  ${AC_SCRIPTS_DIR}/Northrend/UtgardeKeep/UtgardeKeep/utgarde_keep.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_dragonblight.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_grizzly_hills.cpp
  ${AC_SCRIPTS_DIR}/Northrend/AzjolNerub/AzjolNerub/azjol_nerub.h
  ${AC_SCRIPTS_DIR}/Northrend/AzjolNerub/AzjolNerub/instance_azjol_nerub.cpp
  ${AC_SCRIPTS_DIR}/Northrend/AzjolNerub/ahnkahet/instance_ahnkahet.cpp
  ${AC_SCRIPTS_DIR}/Northrend/AzjolNerub/ahnkahet/ahnkahet.h
  ${AC_SCRIPTS_DIR}/Northrend/VioletHold/instance_violet_hold.cpp
  ${AC_SCRIPTS_DIR}/Northrend/VioletHold/violet_hold.h
  ${AC_SCRIPTS_DIR}/Northrend/VioletHold/violet_hold.cpp
  ${AC_SCRIPTS_DIR}/Northrend/IcecrownCitadel/instance_icecrown_citadel.cpp
  ${AC_SCRIPTS_DIR}/Northrend/IcecrownCitadel/icecrown_citadel.cpp
  ${AC_SCRIPTS_DIR}/Northrend/IcecrownCitadel/icecrown_citadel.h
  ${AC_SCRIPTS_DIR}/Northrend/IcecrownCitadel/icecrown_citadel_teleport.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_zuldrak.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_wintergrasp.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_icecrown.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Gundrak/instance_gundrak.cpp
  ${AC_SCRIPTS_DIR}/Northrend/Gundrak/gundrak.h
  ${AC_SCRIPTS_DIR}/Northrend/zone_borean_tundra.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_howling_fjord.cpp
  ${AC_SCRIPTS_DIR}/Northrend/zone_dalaran.cpp
  ${AC_SCRIPTS_DIR}/Northrend/DraktharonKeep/instance_drak_tharon_keep.cpp
  ${AC_SCRIPTS_DIR}/Northrend/DraktharonKeep/drak_tharon_keep.h
)

AC_ADD_SCRIPT_LOADER("Northrend" "ScriptLoader.h")

message("  -> Prepared: Northrend")
