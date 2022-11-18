// Object: DakarPublicEventsManagerData
// ClassId: 2580
// RuntimeId: 41323
// TypeInfo: 0x0000000144D501D0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarPublicEventsManagerData : public Entity::EntityData {
        Int32 NumberOfEvents; // 0x20
        Float32 PreActivateTime; // 0x24
    }; // 0x28
    static_assert(sizeof(DakarPublicEventsManagerData) == 0x28);
}
#pragma pack(pop)