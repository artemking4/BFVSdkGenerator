// Object: BFUIPlayerWatcherCounterData
// ClassId: 2344
// RuntimeId: 7910
// TypeInfo: 0x0000000144D86A20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerWatcherCounterData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean AddToWatchCount; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerWatcherCounterData) == 0x30);
}
#pragma pack(pop)