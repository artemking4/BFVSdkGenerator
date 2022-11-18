// Object: SaveEntityData
// ClassId: 3140
// RuntimeId: 42396
// TypeInfo: 0x0000000144E77040
#include "../Entity/EntityData.h"
#include "../Render/TextureAsset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class SaveEntityData : public Entity::EntityData {
        Render::TextureAsset SaveScreenTexture; // 0x20
        CString LevelName; // 0x28
        CString SaveFileName; // 0x30
        CString SaveNameSID; // 0x38
        Boolean CheckForHumanPlayer; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(SaveEntityData) == 0x48);
}
#pragma pack(pop)