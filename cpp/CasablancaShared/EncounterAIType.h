// Object: EncounterAIType
// ClassId: 5270
// RuntimeId: 28689
// TypeInfo: 0x0000000144D0B230
#include "../CasablancaShared/EncounterAIBase.h"
#include "../Entity/PrefabBlueprint.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/EncounterBasicSpawnSettings.h"
#include "../CasablancaShared/EncounterSpawnLocatorType.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/DifficultyFloat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterAIType : public CasablancaShared::EncounterAIBase {
        Entity::PrefabBlueprint Prefab; // 0x28
        Uint32 TypePoints; // 0x30
        char pad_0x34[0x4];
        Array<CasablancaShared::EncounterSpawnLocatorType> SpawnLocatorTypes; // 0x38
        Array<CasablancaShared::DifficultyFloat> MaxPortionOfWave; // 0x40
        Array<CasablancaShared::DifficultyFloat> ChoiceChanceFactor; // 0x48
        CasablancaShared::EncounterBasicSpawnSettings BasicSpawnSettings; // 0x50
        Boolean AllowClustering; // 0x53
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(EncounterAIType) == 0x58);
}
#pragma pack(pop)