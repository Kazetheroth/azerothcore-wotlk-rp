/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>, released under GNU GPL v2 license, you may redistribute it and/or modify it under version 2 of the License, or (at your option), any later version.
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

#include "ScriptLoader.h"
#include "ScriptMgr.h"
#include "World.h"

// spells
void AddSC_deathknight_spell_scripts();
void AddSC_druid_spell_scripts();
void AddSC_generic_spell_scripts();
void AddSC_hunter_spell_scripts();
void AddSC_mage_spell_scripts();
void AddSC_paladin_spell_scripts();
void AddSC_priest_spell_scripts();
void AddSC_rogue_spell_scripts();
void AddSC_shaman_spell_scripts();
void AddSC_warlock_spell_scripts();
void AddSC_warrior_spell_scripts();
void AddSC_quest_spell_scripts();
void AddSC_item_spell_scripts();

void AddSC_SmartScripts();

//Commands
void AddSC_account_commandscript();
void AddSC_achievement_commandscript();
void AddSC_arena_commandscript();
void AddSC_ban_commandscript();
void AddSC_bf_commandscript();
void AddSC_cast_commandscript();
void AddSC_character_commandscript();
void AddSC_cheat_commandscript();
void AddSC_debug_commandscript();
void AddSC_deserter_commandscript();
void AddSC_disable_commandscript();
void AddSC_event_commandscript();
void AddSC_gm_commandscript();
void AddSC_go_commandscript();
void AddSC_gobject_commandscript();
void AddSC_guild_commandscript();
void AddSC_honor_commandscript();
void AddSC_instance_commandscript();
void AddSC_learn_commandscript();
void AddSC_lfg_commandscript();
void AddSC_list_commandscript();
void AddSC_lookup_commandscript();
void AddSC_message_commandscript();
void AddSC_misc_commandscript();
void AddSC_mmaps_commandscript();
void AddSC_modify_commandscript();
void AddSC_npc_commandscript();
void AddSC_quest_commandscript();
void AddSC_reload_commandscript();
void AddSC_reset_commandscript();
void AddSC_server_commandscript();
void AddSC_spectator_commandscript();
void AddSC_tele_commandscript();
void AddSC_ticket_commandscript();
void AddSC_titles_commandscript();
void AddSC_wp_commandscript();
void AddSC_player_commandscript();

#ifdef SCRIPTS
//world
void AddSC_areatrigger_scripts();
void AddSC_generic_creature();
void AddSC_go_scripts();
void AddSC_guards();
void AddSC_item_scripts();
void AddSC_npc_professions();
void AddSC_npc_innkeeper();
void AddSC_npcs_special();
void AddSC_npc_taxi();
void AddSC_achievement_scripts();
void AddSC_action_ip_logger();

//events
void AddSC_event_brewfest_scripts();
void AddSC_event_hallows_end_scripts();
void AddSC_event_pilgrims_end_scripts();
void AddSC_event_winter_veil_scripts();
void AddSC_event_love_in_the_air();
void AddSC_event_midsummer_scripts();
void AddSC_event_childrens_week();

//eastern kingdoms
void AddSC_alterac_valley();                 //Alterac Valley
void AddSC_blackrock_depths();               //Blackrock Depths
void AddSC_instance_blackrock_depths();
void AddSC_instance_blackrock_spire();
void AddSC_instance_blackwing_lair();
void AddSC_instance_deadmines();             //Deadmines
void AddSC_instance_gnomeregan();            //Gnomeregan
void AddSC_instance_karazhan();              //Karazhan
void AddSC_karazhan();
void AddSC_instance_magisters_terrace();
void AddSC_instance_molten_core();
void AddSC_the_scarlet_enclave();            //Scarlet Enclave
void AddSC_the_scarlet_enclave_c1();
void AddSC_the_scarlet_enclave_c2();
void AddSC_the_scarlet_enclave_c5();
void AddSC_instance_scarlet_monastery();     //Scarlet Monastery
void AddSC_instance_scholomance();           //Scholomance
void AddSC_instance_shadowfang_keep();       //Shadowfang keep
void AddSC_instance_stratholme();            //Stratholme
void AddSC_instance_sunken_temple();         //Sunken Temple
void AddSC_instance_sunwell_plateau();       //Sunwell Plateau
void AddSC_instance_the_stockade();          //The Stockade
void AddSC_instance_uldaman();               //Uldaman
void AddSC_instance_zulaman();
void AddSC_zulaman();
void AddSC_instance_zulgurub();

void AddSC_arathi_highlands();
void AddSC_blasted_lands();
void AddSC_duskwood();
void AddSC_eastern_plaguelands();
void AddSC_eversong_woods();
void AddSC_ghostlands();
void AddSC_hinterlands();
void AddSC_ironforge();
void AddSC_isle_of_queldanas();
void AddSC_redridge_mountains();
void AddSC_silverpine_forest();
void AddSC_stormwind_city();
void AddSC_stranglethorn_vale();
void AddSC_tirisfal_glades();
void AddSC_undercity();
void AddSC_western_plaguelands();
void AddSC_westfall();

//kalimdor
void AddSC_instance_blackfathom_deeps();     //Blackfathom Depths
void AddSC_hyjal();                          //CoT Battle for Mt. Hyjal
void AddSC_instance_mount_hyjal();
void AddSC_hyjal_trash();
void AddSC_instance_old_hillsbrad();
void AddSC_old_hillsbrad();
void AddSC_the_black_morass();
void AddSC_instance_the_black_morass();
void AddSC_culling_of_stratholme();
void AddSC_instance_culling_of_stratholme();
void AddSC_instance_dire_maul();             //Dire Maul
void AddSC_instance_maraudon();              //Maraudon
void AddSC_instance_onyxias_lair();
void AddSC_instance_ragefire_chasm();        //Ragefire Chasm
void AddSC_razorfen_downs();                 //Razorfen Downs
void AddSC_instance_razorfen_downs();
void AddSC_instance_razorfen_kraul();        //Razorfen Kraul
void AddSC_instance_ruins_of_ahnqiraj();
void AddSC_npc_anubisath_sentinel();
void AddSC_instance_temple_of_ahnqiraj();
void AddSC_instance_wailing_caverns();       //Wailing caverns
void AddSC_instance_zulfarrak();             //Zul'Farrak

void AddSC_ashenvale();
void AddSC_azshara();
void AddSC_azuremyst_isle();
void AddSC_bloodmyst_isle();
void AddSC_darkshore();
void AddSC_desolace();
void AddSC_durotar();
void AddSC_dustwallow_marsh();
void AddSC_felwood();
void AddSC_feralas();
void AddSC_moonglade();
void AddSC_mulgore();
void AddSC_orgrimmar();
void AddSC_silithus();
void AddSC_stonetalon_mountains();
void AddSC_tanaris();
void AddSC_teldrassil();
void AddSC_the_barrens();
void AddSC_thousand_needles();
void AddSC_thunder_bluff();
void AddSC_ungoro_crater();
void AddSC_winterspring();

//northrend
void AddSC_instance_gundrak();
void AddSC_instance_azjol_nerub();
void AddSC_instance_ahnkahet();          //Azjol-Nerub Ahn'kahet
void AddSC_instance_trial_of_the_champion();
void AddSC_trial_of_the_champion();
void AddSC_trial_of_the_crusader();
void AddSC_instance_trial_of_the_crusader();
void AddSC_instance_naxxramas();
void AddSC_instance_nexus();
void AddSC_instance_oculus();
void AddSC_oculus();
void AddSC_instance_obsidian_sanctum();
void AddSC_instance_eye_of_eternity();
void AddSC_instance_halls_of_lightning();
void AddSC_brann_bronzebeard();
void AddSC_instance_halls_of_stone();
void AddSC_ulduar();
void AddSC_instance_ulduar();
void AddSC_instance_utgarde_keep();
void AddSC_instance_utgarde_pinnacle();
void AddSC_utgarde_keep();
void AddSC_instance_vault_of_archavon();
void AddSC_instance_drak_tharon_keep();
void AddSC_instance_violet_hold();
void AddSC_violet_hold();
void AddSC_instance_forge_of_souls();   //Forge of Souls
void AddSC_forge_of_souls();
void AddSC_instance_pit_of_saron();     //Pit of Saron
void AddSC_pit_of_saron();
void AddSC_instance_halls_of_reflection();   // Halls of Reflection
void AddSC_halls_of_reflection();
void AddSC_icecrown_citadel_teleport();
void AddSC_instance_icecrown_citadel();
void AddSC_icecrown_citadel();
void AddSC_instance_ruby_sanctum();      // Ruby Sanctum

void AddSC_dalaran();
void AddSC_borean_tundra();
void AddSC_dragonblight();
void AddSC_grizzly_hills();
void AddSC_howling_fjord();
void AddSC_icecrown();
void AddSC_sholazar_basin();
void AddSC_storm_peaks();
void AddSC_zuldrak();
void AddSC_crystalsong_forest();
void AddSC_isle_of_conquest();
void AddSC_wintergrasp();

//outland
void AddSC_instance_auchenai_crypts();
void AddSC_instance_mana_tombs();
void AddSC_instance_sethekk_halls();
void AddSC_instance_shadow_labyrinth();      //Auchindoun Shadow Labyrinth
void AddSC_instance_black_temple();
void AddSC_instance_serpentshrine_cavern();
void AddSC_instance_steam_vault();
void AddSC_instance_the_underbog();
void AddSC_instance_the_slave_pens();
void AddSC_instance_gruuls_lair();
void AddSC_instance_blood_furnace();
void AddSC_instance_magtheridons_lair();
void AddSC_instance_hellfire_ramparts();
void AddSC_arcatraz();                       //TK Arcatraz
void AddSC_instance_arcatraz();
void AddSC_instance_the_botanica();
void AddSC_instance_the_eye();
void AddSC_instance_mechanar();

void AddSC_blades_edge_mountains();
void AddSC_hellfire_peninsula();
void AddSC_nagrand();
void AddSC_netherstorm();
void AddSC_shadowmoon_valley();
void AddSC_shattrath_city();
void AddSC_terokkar_forest();
void AddSC_zangarmarsh();

// Pets
void AddSC_deathknight_pet_scripts();
void AddSC_generic_pet_scripts();
void AddSC_hunter_pet_scripts();
void AddSC_mage_pet_scripts();
void AddSC_priest_pet_scripts();
void AddSC_shaman_pet_scripts();

// battlegrounds

// outdoor pvp
void AddSC_outdoorpvp_ep();
void AddSC_outdoorpvp_hp();
void AddSC_outdoorpvp_na();
void AddSC_outdoorpvp_si();
void AddSC_outdoorpvp_tf();
void AddSC_outdoorpvp_zm();
void AddSC_outdoorpvp_gh();

// player
void AddSC_chat_log();
void AddSC_character_creation();
void AddSC_action_ip_logger();

#endif

void AddSpellScripts()
{
    AddSC_deathknight_spell_scripts();
    AddSC_druid_spell_scripts();
    AddSC_generic_spell_scripts();
    AddSC_hunter_spell_scripts();
    AddSC_mage_spell_scripts();
    AddSC_paladin_spell_scripts();
    AddSC_priest_spell_scripts();
    AddSC_rogue_spell_scripts();
    AddSC_shaman_spell_scripts();
    AddSC_warlock_spell_scripts();
    AddSC_warrior_spell_scripts();
    AddSC_quest_spell_scripts();
    AddSC_item_spell_scripts();
}

void AddCommandScripts()
{
    AddSC_server_commandscript();

    AddSC_account_commandscript();
    AddSC_achievement_commandscript();
    AddSC_arena_commandscript();
    AddSC_ban_commandscript();
    AddSC_bf_commandscript();
    AddSC_cast_commandscript();
    AddSC_character_commandscript();
    AddSC_cheat_commandscript();
    AddSC_debug_commandscript();
    AddSC_deserter_commandscript();
    AddSC_disable_commandscript();
    AddSC_event_commandscript();
    AddSC_gm_commandscript();
    AddSC_go_commandscript();
    AddSC_gobject_commandscript();
    AddSC_guild_commandscript();
    AddSC_honor_commandscript();
    AddSC_instance_commandscript();
    AddSC_learn_commandscript();
    AddSC_lfg_commandscript();
    AddSC_list_commandscript();
    AddSC_lookup_commandscript();
    AddSC_message_commandscript();
    AddSC_misc_commandscript();
    AddSC_mmaps_commandscript();
    AddSC_modify_commandscript();
    AddSC_npc_commandscript();
    AddSC_quest_commandscript();
    AddSC_reload_commandscript();
    AddSC_reset_commandscript();
    AddSC_spectator_commandscript();
    AddSC_tele_commandscript();
    AddSC_ticket_commandscript();
    AddSC_titles_commandscript();
    AddSC_wp_commandscript();
    AddSC_player_commandscript();
}

void AddWorldScripts()
{
#ifdef SCRIPTS
    AddSC_areatrigger_scripts();
    AddSC_generic_creature();
    AddSC_go_scripts();
    AddSC_guards();
    AddSC_item_scripts();
    AddSC_npc_professions();
    AddSC_npc_innkeeper();
    AddSC_npcs_special();
    AddSC_npc_taxi();
    AddSC_achievement_scripts();
    AddSC_chat_log(); // location: scripts\World\chat_log.cpp
    AddSC_character_creation();
    AddSC_action_ip_logger(); // location: scripts\World\action_ip_logger.cpp
#endif
}

void AddEventScripts()
{
#ifdef SCRIPTS
    AddSC_event_brewfest_scripts();
    AddSC_event_hallows_end_scripts();
    AddSC_event_pilgrims_end_scripts();
    AddSC_event_winter_veil_scripts();
    AddSC_event_love_in_the_air();
    AddSC_event_midsummer_scripts();
    AddSC_event_childrens_week();
#endif
}

void AddEasternKingdomsScripts()
{
#ifdef SCRIPTS
    AddSC_alterac_valley();                 //Alterac Valley
    AddSC_blackrock_depths();               //Blackrock Depths
    AddSC_instance_blackrock_depths();
    AddSC_instance_blackrock_spire();
    AddSC_instance_blackwing_lair();
    AddSC_instance_deadmines();             //Deadmines
    AddSC_instance_gnomeregan();            //Gnomeregan
    AddSC_instance_karazhan();              //Karazhan
    AddSC_karazhan();
    AddSC_instance_magisters_terrace();
    AddSC_instance_molten_core();
    AddSC_the_scarlet_enclave();            //Scarlet Enclave
    AddSC_the_scarlet_enclave_c1();
    AddSC_the_scarlet_enclave_c2();
    AddSC_the_scarlet_enclave_c5();
    AddSC_instance_scarlet_monastery();     //Scarlet Monastery
    AddSC_instance_scholomance();           //Scholomance
    AddSC_instance_shadowfang_keep();       //Shadowfang keep
    AddSC_instance_stratholme();            //Stratholme
    AddSC_instance_sunken_temple();         //Sunken Temple
    AddSC_instance_sunwell_plateau();       //Sunwell Plateau
    AddSC_instance_the_stockade();          //The Stockade
    AddSC_instance_uldaman();               //Uldaman
    AddSC_instance_zulaman();
    AddSC_zulaman();
    AddSC_instance_zulgurub();

    AddSC_arathi_highlands();
    AddSC_blasted_lands();
    AddSC_duskwood();
    AddSC_eastern_plaguelands();
    AddSC_eversong_woods();
    AddSC_ghostlands();
    AddSC_hinterlands();
    AddSC_ironforge();
    AddSC_isle_of_queldanas();
    AddSC_redridge_mountains();
    AddSC_silverpine_forest();
    AddSC_stormwind_city();
    AddSC_stranglethorn_vale();
    AddSC_tirisfal_glades();
    AddSC_undercity();
    AddSC_western_plaguelands();
    AddSC_westfall();
#endif
}

void AddKalimdorScripts()
{
#ifdef SCRIPTS
    AddSC_instance_blackfathom_deeps();     //Blackfathom Depths
    AddSC_hyjal();                          //CoT Battle for Mt. Hyjal
    AddSC_instance_mount_hyjal();
    AddSC_hyjal_trash();
    AddSC_instance_old_hillsbrad();
    AddSC_old_hillsbrad();
    AddSC_the_black_morass();
    AddSC_instance_the_black_morass();
    AddSC_culling_of_stratholme();
    AddSC_instance_culling_of_stratholme();
    AddSC_instance_dire_maul();             //Dire Maul
    AddSC_instance_maraudon();              //Maraudon
    AddSC_instance_onyxias_lair();
    AddSC_instance_ragefire_chasm();        //Ragefire Chasm
    AddSC_razorfen_downs();
    AddSC_instance_razorfen_downs();        //Razorfen Downs
    AddSC_instance_razorfen_kraul();        //Razorfen Kraul
    AddSC_instance_ruins_of_ahnqiraj();
    AddSC_npc_anubisath_sentinel();
    AddSC_instance_temple_of_ahnqiraj();
    AddSC_instance_wailing_caverns();       //Wailing caverns
    AddSC_instance_zulfarrak();             //Zul'Farrak instance script

    AddSC_ashenvale();
    AddSC_azshara();
    AddSC_azuremyst_isle();
    AddSC_bloodmyst_isle();
    AddSC_darkshore();
    AddSC_desolace();
    AddSC_durotar();
    AddSC_dustwallow_marsh();
    AddSC_felwood();
    AddSC_feralas();
    AddSC_moonglade();
    AddSC_mulgore();
    AddSC_orgrimmar();
    AddSC_silithus();
    AddSC_stonetalon_mountains();
    AddSC_tanaris();
    AddSC_teldrassil();
    AddSC_the_barrens();
    AddSC_thousand_needles();
    AddSC_thunder_bluff();
    AddSC_ungoro_crater();
    AddSC_winterspring();
#endif
}

void AddOutlandScripts()
{
#ifdef SCRIPTS
    AddSC_instance_auchenai_crypts();
    AddSC_instance_mana_tombs();
    AddSC_instance_sethekk_halls();
    AddSC_instance_shadow_labyrinth();      //Auchindoun Shadow Labyrinth
    AddSC_instance_black_temple();
    AddSC_instance_serpentshrine_cavern();
    AddSC_instance_steam_vault();
    AddSC_instance_the_underbog();
    AddSC_instance_the_slave_pens();
    AddSC_instance_gruuls_lair();
    AddSC_instance_blood_furnace();
    AddSC_instance_magtheridons_lair();
    AddSC_instance_hellfire_ramparts();
    AddSC_arcatraz();                       //TK Arcatraz
    AddSC_instance_arcatraz();
    AddSC_instance_the_botanica();
    AddSC_instance_the_eye();
    AddSC_instance_mechanar();

    AddSC_blades_edge_mountains();
    AddSC_hellfire_peninsula();
    AddSC_nagrand();
    AddSC_netherstorm();
    AddSC_shadowmoon_valley();
    AddSC_shattrath_city();
    AddSC_terokkar_forest();
    AddSC_zangarmarsh();
#endif
}

void AddNorthrendScripts()
{
#ifdef SCRIPTS
    AddSC_instance_gundrak();
    AddSC_instance_ahnkahet();
    AddSC_instance_trial_of_the_champion();
    AddSC_instance_trial_of_the_crusader();
    AddSC_instance_azjol_nerub();
    AddSC_instance_naxxramas();
    AddSC_instance_nexus();
    AddSC_instance_oculus();
    AddSC_oculus();
    AddSC_instance_obsidian_sanctum();
    AddSC_instance_eye_of_eternity();
    AddSC_instance_halls_of_lightning();
    AddSC_brann_bronzebeard();
    AddSC_instance_halls_of_stone();
    AddSC_ulduar();
    AddSC_instance_ulduar();
    AddSC_instance_utgarde_keep();
    AddSC_instance_utgarde_pinnacle();
    AddSC_utgarde_keep();
    AddSC_instance_vault_of_archavon();
    AddSC_instance_drak_tharon_keep();
    AddSC_instance_violet_hold();
    AddSC_violet_hold();
    AddSC_instance_forge_of_souls();   //Forge of Souls
    AddSC_forge_of_souls();
    AddSC_instance_pit_of_saron();      //Pit of Saron
    AddSC_pit_of_saron();
    AddSC_instance_halls_of_reflection();   // Halls of Reflection
    AddSC_halls_of_reflection();
    AddSC_icecrown_citadel_teleport();
    AddSC_instance_icecrown_citadel();
    AddSC_icecrown_citadel();
    AddSC_instance_ruby_sanctum();      // Ruby Sanctum

    AddSC_dalaran();
    AddSC_borean_tundra();
    AddSC_dragonblight();
    AddSC_grizzly_hills();
    AddSC_howling_fjord();
    AddSC_icecrown();
    AddSC_sholazar_basin();
    AddSC_storm_peaks();
    AddSC_zuldrak();
    AddSC_crystalsong_forest();
    AddSC_isle_of_conquest();
    AddSC_wintergrasp();
#endif
}

void AddPetScripts()
{
#ifdef SCRIPTS
    AddSC_deathknight_pet_scripts();
    AddSC_generic_pet_scripts();
    AddSC_hunter_pet_scripts();
    AddSC_mage_pet_scripts();
    AddSC_priest_pet_scripts();
    AddSC_shaman_pet_scripts();
#endif
}

void AddOutdoorPvPScripts()
{
#ifdef SCRIPTS
    AddSC_outdoorpvp_ep();
    AddSC_outdoorpvp_hp();
    AddSC_outdoorpvp_na();
    AddSC_outdoorpvp_si();
    AddSC_outdoorpvp_tf();
    AddSC_outdoorpvp_zm();
    AddSC_outdoorpvp_gh();
#endif
}

//~ **********************  Put your custom scripts below, like the commented examples, uncomment and edit *************************************

//~ void AddSC_MySuperScript();

void AddCustomScripts()
{
#ifdef SCRIPTS
    //~ AddSC_MySuperScript();
#endif
}
