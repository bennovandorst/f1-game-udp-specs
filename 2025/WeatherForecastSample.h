struct WeatherForecastSample
{
 uint8 m_sessionType; // 0 = unknown, see appendix
 uint8 m_timeOffset; // Time in minutes the forecast is for
 uint8 m_weather; // Weather - 0 = clear, 1 = light cloud, 2 = overcast
 // 3 = light rain, 4 = heavy rain, 5 = storm
 int8 m_trackTemperature; // Track temp. in degrees Celsius
 int8 m_trackTemperatureChange; // Track temp. change – 0 = up, 1 = down, 2 = no change
 int8 m_airTemperature; // Air temp. in degrees celsius
 int8 m_airTemperatureChange; // Air temp. change – 0 = up, 1 = down, 2 = no change
 uint8 m_rainPercentage; // Percentage chance of rain (0-100)
};
