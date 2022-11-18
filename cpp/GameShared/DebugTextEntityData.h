// Object: DebugTextEntityData
// ClassId: 3355
// RuntimeId: 19778
// TypeInfo: 0x0000000144E8FFE0
#include "../Entity/SpatialEntityData.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class DebugTextEntityData : public Entity::SpatialEntityData {
        Core::Vec3 TextColor; // 0x60
        CString DebugText; // 0x70
        Core::Realm Realm; // 0x78
        Float32 Scale; // 0x7C
        Boolean Centered; // 0x80
        Boolean Visible; // 0x81
        Boolean DepthTest; // 0x82
        Boolean ScaleWithDistance; // 0x83
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(DebugTextEntityData) == 0x90);
}
#pragma pack(pop)