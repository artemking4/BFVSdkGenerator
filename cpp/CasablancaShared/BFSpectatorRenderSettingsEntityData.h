// Object: BFSpectatorRenderSettingsEntityData
// ClassId: 2140
// RuntimeId: 12
// TypeInfo: 0x0000000144D421D0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpectatorRenderSettingsEntityData : public Entity::EntityData {
        Float32 CullScreenAreaScale; // 0x20
        Float32 GlobalLodScale; // 0x24
        Int32 ForceLod; // 0x28
        Boolean UseCullScreenAreaScaleOverride; // 0x2C
        Boolean UseGlobalLodScaleOverride; // 0x2D
        Boolean UseForceLodOverride; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(BFSpectatorRenderSettingsEntityData) == 0x30);
}
#pragma pack(pop)