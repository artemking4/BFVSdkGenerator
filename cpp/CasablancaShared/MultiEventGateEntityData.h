// Object: MultiEventGateEntityData
// ClassId: 2896
// RuntimeId: 37182
// TypeInfo: 0x0000000144D5BAE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/MultiEventGateEventInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MultiEventGateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 EventCount; // 0x24
        Array<CasablancaShared::MultiEventGateEventInfo> Events; // 0x28
        Boolean Open; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(MultiEventGateEntityData) == 0x38);
}
#pragma pack(pop)