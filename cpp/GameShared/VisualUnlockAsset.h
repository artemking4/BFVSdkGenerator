// Object: VisualUnlockAsset
// ClassId: 443
// RuntimeId: 27837
// TypeInfo: 0x0000000144E8E2E0
#include "../GameShared/UnlockAsset.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/Uint32.h"
#include "../GameShared/BlueprintBundleReference.h"
#include "../Global/Boolean.h"
#include "../Ant/AntRef.h"
#include "../GameShared/VisualUnlockAntData.h"
#include "../GameShared/VisualUnlockAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class VisualUnlockAsset : public GameShared::UnlockAsset {
        Entity::ObjectBlueprint OutObjectBlueprint; // 0x58
        Uint32 OutClothObjectVariationNameHash; // 0x60
        char pad_0x64[0x4];
        GameShared::BlueprintBundleReference BlueprintBundleReference; // 0x68
        GameShared::BlueprintBundleReference FirstPersonBundle; // 0xA0
        Ant::AntRef FacePoserLibrary; // 0xD8
        Ant::AntRef MorphDofSet; // 0xEC
        GameShared::VisualUnlockAntData VisualUnlockAntData; // 0x100
        Array<GameShared::VisualUnlockAsset> VisualUnlockAssets; // 0x108
        Uint32 Category; // 0x110
        Boolean RenderIn1p; // 0x114
        Boolean DisableRenderForeground; // 0x115
        Boolean RemoveMeshOnDeath; // 0x116
        Boolean OnDemandLoaded; // 0x117
    }; // 0x118
    static_assert(sizeof(VisualUnlockAsset) == 0x118);
}
#pragma pack(pop)