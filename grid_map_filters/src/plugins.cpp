#include <pluginlib/class_list_macros.h>

#include "grid_map_filters/BufferNormalizerFilter.hpp"
#include "grid_map_filters/ColorBlendingFilter.hpp"
#include "grid_map_filters/ColorFillFilter.hpp"
#include "grid_map_filters/ColorMapFilter.hpp"
#include "grid_map_filters/CurvatureFilter.hpp"
#include "grid_map_filters/DeletionFilter.hpp"
#include "grid_map_filters/DuplicationFilter.hpp"
#include "grid_map_filters/LightIntensityFilter.hpp"
#include "grid_map_filters/MathExpressionFilter.hpp"
#include "grid_map_filters/MeanInRadiusFilter.hpp"
#include "grid_map_filters/MedianFillFilter.hpp"
#include "grid_map_filters/MinInRadiusFilter.hpp"
#include "grid_map_filters/MockFilter.hpp"
#include "grid_map_filters/NormalColorMapFilter.hpp"
#include "grid_map_filters/NormalVectorsFilter.hpp"
#include "grid_map_filters/SetBasicLayersFilter.hpp"
#include "grid_map_filters/SlidingWindowMathExpressionFilter.hpp"
#include "grid_map_filters/ThresholdFilter.hpp"

PLUGINLIB_EXPORT_CLASS(grid_map::BufferNormalizerFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::ColorBlendingFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::ColorFillFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::ColorMapFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::CurvatureFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::DeletionFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::DuplicationFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::LightIntensityFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::MathExpressionFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::MeanInRadiusFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::MedianFillFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::MinInRadiusFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::MockFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::NormalColorMapFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::NormalVectorsFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::SetBasicLayersFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::SlidingWindowMathExpressionFilter, filters::FilterBase<grid_map::GridMap>)
PLUGINLIB_EXPORT_CLASS(grid_map::ThresholdFilter, filters::FilterBase<grid_map::GridMap>)