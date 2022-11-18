// Object: EncounterFlowContainerEntityData
// ClassId: 2687
// RuntimeId: 30766
// TypeInfo: 0x0000000144D0B930
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/EncounterFlowConfigAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterFlowContainerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 EncounterSeed; // 0x24
        Array<CasablancaShared::EncounterFlowConfigAsset> FlowConfigAssets; // 0x28
        Array<Int32> FlowConfigAssetNameHashs; // 0x30
        Uint32 MaxEncounters; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(EncounterFlowContainerEntityData) == 0x40);
}
#pragma pack(pop)