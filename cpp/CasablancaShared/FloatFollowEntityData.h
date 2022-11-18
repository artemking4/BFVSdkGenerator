// Object: FloatFollowEntityData
// ClassId: 2753
// RuntimeId: 1554
// TypeInfo: 0x0000000144D0A4B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/FloatFollowData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatFollowEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::FloatFollowData FollowSettings; // 0x28
        Float32 Input; // 0x30
        Boolean Enabled; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(FloatFollowEntityData) == 0x38);
}
#pragma pack(pop)