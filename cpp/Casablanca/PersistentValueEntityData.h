// Object: PersistentValueEntityData
// ClassId: 2944
// RuntimeId: 12279
// TypeInfo: 0x0000000144C325F0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Casablanca/PersistentValueAsset.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PersistentValueEntityData : public Entity::EntityData {
        Int32 DefaultValue; // 0x20
        Int32 Value; // 0x24
        Casablanca::PersistentValueAsset OptionalSharedID; // 0x28
        Boolean LoadValueOnCreate; // 0x30
        Boolean SaveValueOnShutdown; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(PersistentValueEntityData) == 0x38);
}
#pragma pack(pop)