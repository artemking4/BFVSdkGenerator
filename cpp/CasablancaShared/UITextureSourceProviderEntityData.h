// Object: UITextureSourceProviderEntityData
// ClassId: 3780
// RuntimeId: 45777
// TypeInfo: 0x0000000144D20070
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/UITextureMappingAsset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UITextureSourceProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::UITextureMappingAsset TextureAsset; // 0x28
        CString TextureId; // 0x30
        Float32 FrameRate; // 0x38
        Boolean Animated; // 0x3C
        Boolean AutoStart; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(UITextureSourceProviderEntityData) == 0x40);
}
#pragma pack(pop)