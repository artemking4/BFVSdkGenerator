// Object: BFUICameraHubEntityData
// ClassId: 2167
// RuntimeId: 36859
// TypeInfo: 0x0000000144D824A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/CameraParams.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICameraHubEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::CameraParams> Cameras; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUICameraHubEntityData) == 0x30);
}
#pragma pack(pop)