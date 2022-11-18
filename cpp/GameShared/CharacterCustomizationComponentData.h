// Object: CharacterCustomizationComponentData
// ClassId: 1738
// RuntimeId: 52749
// TypeInfo: 0x0000000144E823C0
#include "../Entity/GameComponentData.h"
#include "../Render/MeshLodGroup.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterCustomizationComponentData : public Entity::GameComponentData {
        Render::MeshLodGroup SharedLodGroup; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(CharacterCustomizationComponentData) == 0x90);
}
#pragma pack(pop)