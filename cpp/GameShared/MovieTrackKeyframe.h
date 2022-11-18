// Object: MovieTrackKeyframe
// ClassId: 4320
// RuntimeId: 49184
// TypeInfo: 0x0000000144E96130
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../MovieBase/MovieTextureBaseAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class MovieTrackKeyframe : public Core::DataContainer {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        MovieBase::MovieTextureBaseAsset Movie; // 0x20
    }; // 0x28
    static_assert(sizeof(MovieTrackKeyframe) == 0x28);
}
#pragma pack(pop)