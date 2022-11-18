// Object: BFCheckpointEntityData
// ClassId: 3260
// RuntimeId: 52828
// TypeInfo: 0x0000000144D4B5F0
#include "../Entity/SpatialEntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../GameShared/CharacterSpawnTemplateData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFCheckpointEntityData : public Entity::SpatialEntityData {
        CString SaveName; // 0x60
        CString CheckpointName; // 0x68
        Uint32 WaitForTerrainTimeout; // 0x70
        Uint32 SpawnIntoVehicleEntryId; // 0x74
        GameShared::CharacterSpawnTemplateData CharacterTemplate; // 0x78
        Boolean IsDefault; // 0x80
        Boolean AutoSaveOnLoaded; // 0x81
        Boolean WaitForTerrain; // 0x82
        Boolean TransformVehicleOnSpawn; // 0x83
        Boolean EquipSavedLoadout; // 0x84
        Boolean EquipFirstLoadoutWeapon; // 0x85
        char pad_0x86[0xA];
    }; // 0x90
    static_assert(sizeof(BFCheckpointEntityData) == 0x90);
}
#pragma pack(pop)