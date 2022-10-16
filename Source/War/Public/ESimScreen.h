#pragma once
#include "CoreMinimal.h"
#include "ESimScreen.generated.h"

UENUM()
enum class ESimScreen : int32 {
    HUD,
    Pause,
    Wait,
    End,
    Options,
    Keyboard,
    Graphics,
    ChatOptions,
    Players,
    Tutorial,
    JoinWar,
    ProfileUpdating,
    Callouts,
    Monument,
    AudioOptions,
    Inventory,
    Factory,
    StorageBox,
    Refinery,
    BuildFromStructure,
    Base,
    Lore,
    Build,
    VehicleStorage,
    Map,
    ItemStash,
    StaticArtillery,
    TechTree,
    StorageFacility,
    GarrisonHouse,
    EmplacementHouse,
    RocketSite,
    ResourceMine,
    ShippingContainer,
    Log,
    Hospital,
    StructureUpgrade,
    ConcreteMixer,
    LongRangeArtillery,
    SignPost,
    Crate,
    EngineeringCenter,
    EmplacedStructure,
    ViolationLog,
    CharacterCustomization,
    SimpleStockpile,
    FirePit,
    IntelCenter,
    None,
    DialogPrompt,
    ReportPlayer,
    ActivityLog,
    RegionLog,
    FuelSilo,
    OilRefinery,
    AssemblyStation,
    Facility,
    NumTypes,
};

