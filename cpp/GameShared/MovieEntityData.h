// Object: MovieEntityData
// ClassId: 2895
// RuntimeId: 780
// TypeInfo: 0x0000000144E75FC0
#include "../Entity/EntityData.h"
#include "../MovieBase/MovieTextureBaseAsset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class MovieEntityData : public Entity::EntityData {
        MovieBase::MovieTextureBaseAsset Movie; // 0x20
        Float32 ExternalTime; // 0x28
        Uint32 RenderableCount; // 0x2C
        Uint32 ThreadCount; // 0x30
        Boolean IsNormalMap; // 0x34
        Boolean IsLooping; // 0x35
        Boolean PreBuffer; // 0x36
        char pad_0x37[0x1];
    }; // 0x38
    static_assert(sizeof(MovieEntityData) == 0x38);
}
#pragma pack(pop)