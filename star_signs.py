day = int(input("Input birthday: "))
month = input("Input month of birth (e.g. march, july etc): ")

#First enter the day you were born (between 1-30), then enter your month, after you do this it will generate your star sign and what your star sign 
#is known for

if month == 'december':
	astro_sign = 'Sagittarius - Sagittarius are known for being optimistic and carefree. Pros: They love an adventure. Cons: They can become very unemotional and restless. Star Sign match: Aries, Leo, Libra, Aquarius' if (day < 22) else 'capricorn'

elif month == 'january':
	astro_sign = 'Capricorn - Capricorns are known for being very ambitious and organised and love to make their own rules. Pros: Loyal and trustworthy. Cons: They can be very controlling. Star sign match: Tauros, Virgo, Scorpio and Pisces' if (day < 20) else 'aquarius'

elif month == 'february':
	astro_sign = 'Aquarius - Aquarius are known for very progressive, idealistc and intelligent and highly creative, Pros: You will feel comfortable and at ease. Cons: They can be too much in their head. Star sign match: Gemini, Libra, Aries and Sagittarius' if (day < 19) else 'pisces'

elif month == 'march':
	astro_sign = 'Pisces - Pisces are known for being very artisitic and love to express themselves. Pros: They will treat you like a bestfriend always. Cons: They can be overly sensitive and drown in their emotions and energy. Star Sign Match: Tauros, Scorpio, Cancer and Capricorn' if (day < 21) else 'aries'

elif month == 'april':
	astro_sign = 'Aries - Aries are known for being passionate, motitivated and someone who is a strong leader. Pros: They love adventure and fun like a bloodhound. Cons: They can be overly excited and giddy. Star Sign Match: Sagittarius, Leo and Aries' if (day < 20) else 'taurus'

elif month == 'may':
	astro_sign = 'Taurus - Taurus are known for being dependable, hardworking and dedicated. Pros: They are loving and warm and will make you feel cozy. Cons: They are arrogant and love to argue. Star sign match: Cancer, Virgo, Capricorn and Pisces' if (day < 21) else 'gemini'

elif month == 'june':
	astro_sign = 'Gemini - Geminis are known for being easy going and adjustable and also very adaptable. Pros: They never love dull moments, they are jovial and full of life. Cons: They have two sides and will ditch you when they find something better, also very sensitive and emotional. Star sign match: Aries, Leo, Libra and Aquarius' if (day < 21) else 'cancer'

elif month == 'july':
	astro_sign = 'Cancer - Cancers are knwon for being very kind and soulful and overly sensitive. Pros: You can tell em any secret you want, bet your life that it is safe with a cancer. Cons; They are extremely boring, dull, no fun. Star sign match: Scorpio, Tauros, Virgo and Pisces' if (day < 23) else 'leo'

elif month == 'august':
	astro_sign = 'Leo - Leos are known for being confident, comfortable and love being the center of attention. Pros: They are very attractive and can light up a whole room. Cons: They are not the best person to come to if you have problems, they dont care about sensitivity. Star Sign Match: Gemini, Leo, Sagittarius and Aries' if (day < 23) else 'virgo'

elif month == 'september':
	astro_sign = 'Virgo - Virgos are known for being reliable and patient but also very critical. Pros: Their seriousness and grown up attitude could attract some. Cons: They are overly critical, judgement and love picking out all your flaws. Star sign match: Tauros, Cancer, Scorpio and Capricorn' if (day < 23) else 'libra'

elif month == 'october':
	astro_sign = 'Libra - Libras are known for being diplomatic, idealistic and very social. Pros: They enjoy romance like a fairtail and always bring their A game when they put their head down. Cons: it takes a while to trust a Libra. Star sign match: Tauros, Cancer, Scorpio and Capricorn' if (day < 23) else 'scorpio'

elif month == 'november':
	astro_sign = 'scorpio - Scorpios are known for being very hard working, loyal and ambitous. Pros: They are filled with power, oozing with passion and are very intense. Cons: Can overthink a lot, Can be very serious and over intense and tend to have a roller-coaster of emotions. Star Sign Match: Pisces, Cancer, Virgo and Capricorn' if (day < 22) else 'sagittarius'

print("Your Astrological sign is :",astro_sign)
