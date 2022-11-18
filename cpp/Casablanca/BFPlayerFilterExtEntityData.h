// Object: BFPlayerFilterExtEntityData
// ClassId: 2108
// RuntimeId: 59444
// TypeInfo: 0x0000000144C31070
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFPlayerFilterExtEntityData : public Entity::EntityData {
        Array<CString> ConsumableStat; // 0x20
        Boolean ForwardToSpectators; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFPlayerFilterExtEntityData) == 0x30);
}
#pragma pack(pop)