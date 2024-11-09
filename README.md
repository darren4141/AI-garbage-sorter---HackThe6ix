https://devpost.com/software/garbage-sorter-dmr5ku

**Inspiration
**As busy students, we noticed that students loved “shooting” garbage into bins. When it came to throwing out garbage and waste, the bins that held the garbage had a small distance between each opening for each separate type of waste for the trash to go. This meant that students would have to walk long distances to accurately dispose of our waste. We also noticed that many students were uneducated on what objects are recyclable or not.

These two issues lead to people littering and/or throwing their waste in the wrong bins, leading to increased pollution and climate change.

**What it does
**To solve this issue, we created a bin with a garbage and recycling section. Students will throw their trash/recycling into their desired target. A camera and sensors within the garbage can will determine whether they threw their waste into the right target. Then, a servo will deposit the piece of waste into the correct bucket, and the user will gain points if they correctly dispose of their waste, or lose points if they incorrectly dispose of it. These points can be used to redeem prizes around campuses with these garbage cans.

**How we built it
**BasketBin’s main frame includes a repurposed cardboard box with two carved holes on the top. We used servo motors, ultrasonic and PIR sensors, and a webcamera to create the contraption which deposits the waste into the correct bin.

We used a Flask server for the application and Supabase for the database to store player information. Player score entry is updated from the python script that adds or removes score based on if the user placed the waste into the correct bin.

**Challenges we ran into
**In this hackathon, with Flask and Supabase being new technologies to us, we had to spend lots of time figuring out how to link the webpage, database, CV, and hardware. Each component had it’s own challenges such as fixing the sensors for our garbage sorter, connecting the computer vision to the hardware, and fetching and sending entries to the database. After perseverance, we problem solved through the issues and came to a solution.

**Accomplishments that we're proud of
**We are proud of the seamless design that allows users to interact with the garbage can in a fun and interactive way which also informs users on waste management. Additionally we are proud of the interconnectedness of our project, with all moving parts such as the hardware, computer vision, database, and webpage.

**What's next for Garbage sorter
**Looking ahead, we have several exciting plans for our project. We would like to integrate this product into university campuses around Canada to promote an environment where students can be informed of recycling policies in a fun and exciting manner.
