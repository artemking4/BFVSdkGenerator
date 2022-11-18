// Object: CharacterSpawnReferenceObjectData
// ClassId: 3977
// RuntimeId: 9715
// TypeInfo: 0x0000000144E90860
#include "../GameShared/SpawnReferenceObjectData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/CharacterSpawnTemplateData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterSpawnReferenceObjectData : public GameShared::SpawnReferenceObjectData {
        Uint32 VehicleEntryIndex; // 0x1C0
        char pad_0x1C4[0x4];
        GameShared::CharacterSpawnTemplateData Template; // 0x1C8
        Float32 HumanTargetPreference; // 0x1D0
        Int32 MenuShowOrder; // 0x1D4
        Boolean AllowFallbackOnNextAvailabeVehicleEntry; // 0x1D8
        Boolean SpawnVisible; // 0x1D9
        Boolean IsTarget; // 0x1DA
        Boolean AffectMinimapPosition; // 0x1DB
        Boolean ShowAsLabelOnly; // 0x1DC
        char pad_0x1DD[0x3];
    }; // 0x1E0
    static_assert(sizeof(CharacterSpawnReferenceObjectData) == 0x1E0);
}
#pragma pack(pop)