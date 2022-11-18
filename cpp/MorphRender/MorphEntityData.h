// Object: MorphEntityData
// ClassId: 3414
// RuntimeId: 46887
// TypeInfo: 0x0000000144EA3660
#include "../Entity/SpatialEntityData.h"
#include "../MorphBase/MorphStatic.h"
#include "../MorphBase/MorphTargets.h"
#include "../Core/LinearTransform.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Core/Asset.h"

#pragma pack(push, 16)
namespace MorphRender {
    class MorphEntityData : public Entity::SpatialEntityData {
        MorphBase::MorphStatic MorphAsset; // 0x60
        MorphBase::MorphTargets MorphTargetsAsset; // 0x68
        Array<Core::LinearTransform> ModelPose; // 0x70
        Array<Int32> SkeletalHierarchy; // 0x78
        Array<CString> BoneNames; // 0x80
        Core::Asset ActorFaceFXAsset; // 0x88
        Array<Core::Asset> FaceFXPlaylist; // 0x90
        char pad_0x98[0x8];
    }; // 0xA0
    static_assert(sizeof(MorphEntityData) == 0xA0);
}
#pragma pack(pop)