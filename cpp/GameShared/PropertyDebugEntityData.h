// Object: PropertyDebugEntityData
// ClassId: 3059
// RuntimeId: 13590
// TypeInfo: 0x0000000144E8FAE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/PropertyDebugGraphMode.h"
#include "../Global/Int32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace GameShared {
    class PropertyDebugEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 TextColor; // 0x30
        Core::Vec3 WorldPosition; // 0x40
        Core::LinearTransform TransformValue; // 0x50
        Core::Vec3 Vec3Value; // 0x90
        Core::Vec4 Vec4Value; // 0xA0
        Core::Vec2 ScreenPosition; // 0xB0
        CString ValuePrefix; // 0xB8
        Float32 TextScale; // 0xC0
        Core::Vec2 GraphSize; // 0xC4
        GameShared::PropertyDebugGraphMode GraphMode; // 0xCC
        Core::Vec2 GraphValueMinMax; // 0xD0
        Float32 FloatValue; // 0xD8
        Int32 IntValue; // 0xDC
        Core::Vec2 Vec2Value; // 0xE0
        CString StringValue; // 0xE8
        Boolean Multiline; // 0xF0
        Boolean ShowTransformInWorld; // 0xF1
        Boolean ShowTransformCoordinates; // 0xF2
        Boolean DefaultVisible; // 0xF3
        Boolean DrawGraph; // 0xF4
        Boolean AllowThroughAssertCheck; // 0xF5
        char pad_0xF6[0xA];
    }; // 0x100
    static_assert(sizeof(PropertyDebugEntityData) == 0x100);
}
#pragma pack(pop)