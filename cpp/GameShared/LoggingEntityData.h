// Object: LoggingEntityData
// ClassId: 2851
// RuntimeId: 57534
// TypeInfo: 0x0000000144E8F2E0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class LoggingEntityData : public Entity::EntityData {
        Array<CString> Strings; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform TransformValue; // 0x30
        Core::Vec3 Vec3Value; // 0x70
        Core::Realm Realm; // 0x80
        Float32 FloatValue; // 0x84
        Int32 IntValue; // 0x88
        Core::Vec2 Vec2Value; // 0x8C
        Boolean BoolValue; // 0x94
        char pad_0x95[0xB];
    }; // 0xA0
    static_assert(sizeof(LoggingEntityData) == 0xA0);
}
#pragma pack(pop)