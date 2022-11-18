// Object: BFLocalPlayerEventGateData
// ClassId: 2102
// RuntimeId: 5681
// TypeInfo: 0x0000000144C30FF0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFLocalPlayerEventGateData : public Entity::EntityData {
        Boolean AllowMultipleOpens; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFLocalPlayerEventGateData) == 0x28);
}
#pragma pack(pop)