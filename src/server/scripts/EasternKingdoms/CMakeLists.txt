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
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_ghostlands.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_eversong_woods.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/AlteracValley/alterac_valley.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/BlackrockDepths/blackrock_depths.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/BlackrockDepths/instance_blackrock_depths.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/BlackrockDepths/blackrock_depths.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/BlackwingLair/instance_blackwing_lair.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/BlackwingLair/blackwing_lair.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/BlackrockSpire/blackrock_spire.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/BlackrockSpire/instance_blackrock_spire.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/MoltenCore/molten_core.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/BlackrockMountain/MoltenCore/instance_molten_core.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Scholomance/scholomance.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Scholomance/instance_scholomance.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_isle_of_queldanas.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ZulGurub/zulgurub.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ZulGurub/instance_zulgurub.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_wetlands.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_arathi_highlands.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Gnomeregan/instance_gnomeregan.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Gnomeregan/gnomeregan.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_redridge_mountains.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_ironforge.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ScarletEnclave/chapter2.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ScarletEnclave/chapter5.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ScarletEnclave/chapter1.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ScarletEnclave/zone_the_scarlet_enclave.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_eastern_plaguelands.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Stratholme/instance_stratholme.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Stratholme/stratholme.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_tirisfal_glades.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/SunkenTemple/sunken_temple.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/SunkenTemple/instance_sunken_temple.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/MagistersTerrace/magisters_terrace.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/MagistersTerrace/instance_magisters_terrace.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Uldaman/uldaman.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Uldaman/instance_uldaman.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/SunwellPlateau/sunwell_plateau.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/SunwellPlateau/instance_sunwell_plateau.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_stranglethorn_vale.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Deadmines/instance_deadmines.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Deadmines/deadmines.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_duskwood.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ScarletMonastery/instance_scarlet_monastery.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ScarletMonastery/scarletmonastery.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_undercity.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ShadowfangKeep/instance_shadowfang_keep.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ShadowfangKeep/shadowfang_keep.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_burning_steppes.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_blasted_lands.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_stormwind_city.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ZulAman/instance_zulaman.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ZulAman/zulaman.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/ZulAman/zulaman.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_hinterlands.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_western_plaguelands.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_alterac_mountains.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_westfall.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/zone_silverpine_forest.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Karazhan/instance_karazhan.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Karazhan/karazhan.cpp
  ${AC_SCRIPTS_DIR}/EasternKingdoms/Karazhan/karazhan.h
  ${AC_SCRIPTS_DIR}/EasternKingdoms/TheStockade/instance_the_stockade.cpp
)

AC_ADD_SCRIPT_LOADER("EasternKingdoms" "ScriptLoader.h")

message("  -> Prepared: Eastern Kingdoms")
