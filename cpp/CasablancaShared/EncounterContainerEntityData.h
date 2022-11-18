// Object: EncounterContainerEntityData
// ClassId: 2686
// RuntimeId: 35089
// TypeInfo: 0x0000000144D0BA30
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/EncounterSequenceAsset.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/EncounterAISpawnConstraints.h"
#include "../CasablancaShared/EncounterContainerActivator.h"
#include "../CasablancaShared/PreferredPlayerSpawnSettings.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterContainerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 EncounterSeed; // 0x24
        Array<CasablancaShared::EncounterSequenceAsset> Encounters; // 0x28
        Array<Int32> EncounterNameHashs; // 0x30
        CasablancaShared::EncounterAISpawnConstraints AISpawn; // 0x38
        CasablancaShared::EncounterContainerActivator Activator; // 0x40
        CasablancaShared::PreferredPlayerSpawnSettings PlayerSpawn; // 0x48
        Array<Uint32> OverrideThemeNameHashs; // 0x58
        Array<Uint32> ExcludeThemeNameHashs; // 0x60
    }; // 0x68
    static_assert(sizeof(EncounterContainerEntityData) == 0x68);
}
#pragma pack(pop)